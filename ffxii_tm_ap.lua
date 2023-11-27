--TABLE DEFINITIONS
function define_location_ids()
    location_ids = {450011,
                    450012,
                    450021,
                    450022,
                    450031,
                    450032,
                    450041,
                    450042,
                    450051,
                    450052,
                    450061,
                    450062,
                    450071,
                    450072,
                    450081,
                    450082,
                    450091,
                    450092,
                    450101,
                    450102,
                    450111,
                    450112,
                    450121,
                    450122,
                    450131,
                    450132,
                    450141,
                    450142,
                    450151,
                    450152,
                    450161,
                    450162,
                    450171,
                    450172,
                    450181,
                    450182,
                    450191,
                    450192,
                    450201,
                    450202,
                    450211,
                    450212,
                    450221,
                    450222,
                    450231,
                    450232,
                    450241,
                    450242,
                    450251,
                    450252,
                    450261,
                    450262,
                    450271,
                    450272,
                    450281,
                    450282,
                    450291,
                    450292,
                    450301,
                    450302,
                    450303,
                    450311,
                    450312,
                    450313,
                    450314,
                    450315,
                    450321,
                    450322,
                    450323,
                    450331,
                    450332,
                    450341,
                    450342,
                    450351,
                    450352,
                    450353,
                    450354,
                    450361,
                    450362,
                    450363,
                    450371,
                    450372,
                    450381,
                    450382,
                    450391,
                    450392,
                    450401,
                    450402,
                    450411,
                    450412,
                    450421,
                    450422,
                    450431,
                    450432,
                    450441,
                    450442,
                    450451,
                    450452,
                    450461,
                    450462,
                    450471,
                    450472,
                    450481,
                    450482,
                    450491,
                    450492,
                    450501,
                    450502,
                    450511,
                    450512,
                    450521,
                    450522,
                    450531,
                    450532,
                    450541,
                    450542,
                    450551,
                    450552,
                    450561,
                    450562,
                    450571,
                    450572,
                    450581,
                    450582,
                    450591,
                    450592,
                    450601,
                    450602,
                    450611,
                    450612,
                    450621,
                    450622,
                    450623,
                    450624,
                    450631,
                    450632,
                    450641,
                    450642,
                    450651,
                    450652,
                    450661,
                    450662,
                    450671,
                    450672,
                    450681,
                    450682,
                    450691,
                    450692,
                    450701,
                    450702,
                    450711,
                    450712,
                    450721,
                    450722,
                    450731,
                    450732,
                    450741,
                    450742,
                    450751,
                    450752,
                    450761,
                    450762,
                    450771,
                    450772,
                    450781,
                    450782,
                    450791,
                    450792,
                    450801,
                    450802,
                    450811,
                    450812,
                    450821,
                    450822,
                    450823,
                    450831,
                    450832,
                    450833,
                    450841,
                    450842,
                    450843,
                    450851,
                    450852,
                    450853,
                    450861,
                    450862,
                    450863,
                    450871,
                    450872,
                    450873,
                    450874,
                    450881,
                    450882,
                    450883,
                    450891,
                    450892,
                    450901,
                    450902,
                    450911,
                    450912,
                    450913,
                    450914,
                    450921,
                    450922,
                    450923,
                    450931,
                    450932,
                    450941,
                    450942,
                    450943,
                    450951,
                    450961,
                    450962,
                    450971,
                    450972,
                    450973,
                    450974,
                    450991,
                    451001,
                    451002,
                    451003}
    return location_ids
end

location_ids = define_location_ids()





--FUNCTION DEFINITIONS
function file_exists(name)
   local f=io.open(name,"r")
   if f~=nil then io.close(f) return true else return false end
end

function create_client_communcation_path(path)
    ok, err, code = os.rename(path, path)
    exists = true
    if not ok and code ~= 13 then
        exists = false
    end
    if not exists then
        os.execute("mkdir " .. path)
    end
end

function create_empty_file(path, filename)
    file = io.open(path .. filename, "w")
    io.output(file)
    io.write("")
    io.close(file)
end

function define_add_item()
    argMem = memory.allocExe(0x0100)
    memory.registerSymbol("test_args", argMem)
    assembly =
    [[
    test_code:
      sub rsp,0x28
      lea rax,[%test_args%]

      movzx ecx,word ptr [rax]
      movsx edx,byte ptr [rax+0x02]
      xor r8d,r8d
      lea r9d,[r8+0x01]

      xor eax,eax
      test edx,edx
      cmovns eax,r9d
      mov [rsp+0x20],eax

      call 0x003008A0
      add rsp,0x28
      ret
    ]]

    memory.assemble(assembly, {"test_code"})
end

function add_item(arg1,arg2)
    argBase = memory.getSymbol("test_args")
    memory.u16[argBase] = arg1
    memory.s8[argBase+2] = arg2
    memory.execute("test_code")
end

function define_heal_all()
    healArgMem = memory.allocExe(0x0100)
    memory.registerSymbol("heal_args", argMem)
    assembly = [[
heal_code:
  push rbx
  sub rsp,0x20
  lea rbx,[%test_args%]

  mov edx,[rbx]
  call 0x0030F4B0

  add rsp,0x20
  pop rbx
  ret
]]
    memory.assemble(assembly, {"heal_code"})
end

function heal_all()
    argBase = memory.getSymbol("heal_args")
    memory.u32[argBase] = 29
    memory.execute("heal_code")
end

function receive_items()
    ap_voucher_1_qty = memory.u8[ap_voucher_qty_address[1]]
    ap_voucher_2_qty = memory.u8[ap_voucher_qty_address[2]]
    ap_voucher_3_qty = memory.u8[ap_voucher_qty_address[3]]
    check_num = ap_voucher_1_qty + ap_voucher_2_qty + ap_voucher_3_qty + 1
    while file_exists(client_communication_path .. "AP_" .. tostring(check_num) .. ".item") do
        file = io.open(client_communication_path .. "AP_" .. tostring(check_num) .. ".item", "r")
        io.input(file)
        received_item_id = tonumber(io.read())
        io.close(file)
        received_item_id = received_item_id % 4400000
        if ap_voucher_1_qty < 99 then
            add_item(ap_voucher_item_id[1],1)
            ap_voucher_1_qty = ap_voucher_1_qty + 1
            check_num = check_num + 1
        elseif ap_voucher_1_qty >= 99 and ap_voucher_2_qty < 99 then
            add_item(ap_voucher_item_id[2],1)
            ap_voucher_2_qty = ap_voucher_2_qty + 1
            check_num = check_num + 1
        else
            add_item(ap_voucher_item_id[3],1)
            ap_voucher_3_qty = ap_voucher_3_qty + 1
            check_num = check_num + 1
        end
        add_item(received_item_id,1)
    end
end

function send_items()
    i = 0
    while i < #location_ids do
        if memory.u8[chest_item_id_address + (i*2)] > 0 then
            add_item(chest_item_id_base + i,-1)
            file = io.open(client_communication_path .. "send" .. tostring(location_ids[i + 1]), "w")
            io.output(file)
            io.write("")
            io.close(file)
        end
        i = i + 1
    end
end

function check_keys()
    if input.getKeyPressed(input.key.KEY_F11) then --Jump to save/store
        if (memory.s8[0x215F1AE] ~= 0) then
            call.mapJump(53, 0, 2)
        end
    end
    if input.getKeyPressed(input.key.KEY_F1) then --Jump to level 1
        if (memory.s8[0x215F1AE] ~= 0) then
            call.mapJump(1155, 0, 2)
        end
    end
end


--INITIALIZATIONS
client_communication_path = os.getenv('LOCALAPPDATA') .. "\\FFXIITM\\"
ap_voucher_item_id = {8472, 8473, 8474}
ap_voucher_qty_address = {0x021B764C, 0x021B764E, 0x021B7650}
chest_item_id_address = 0x021B765E
chest_item_id_base = 8481
lightworks_story_progress_address = 0x02164E41
create_client_communcation_path(client_communication_path)
define_add_item()
define_heal_all()

function main_loop()
    memory.u8[0x02164E41] = 0
    receive_items()
    send_items()
    check_keys()
    event.executeAfterMs(5000, main_loop)
end



print("FFXIV Trial Mode AP v0.0.1")
--for key,value in pairs(call) do
--    print("found member " .. key);
--end



event.registerEventAsync("onInitDone", main_loop)
event.registerEventAsync("onMapJump", heal_all)
