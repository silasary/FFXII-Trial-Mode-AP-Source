// File size: 59520 Bytes
// Author:    t-hirose
// Source:    tri_a01.src
// Date:      00/00 00:00
// Binary:    C:\Users\Nick\Documents\FFXII Modding Tools 3\The.Insurgents.Workshop.v1.0.1\files\source\ps2data\plan_master\us\plan_map\tri_a\tri_a01\global\tri_a01.ebp.dir\section_000.bin

option authorName = "t-hirose";
option fileName = "tri_a01.src";
option dataFile = "tri_a01.src.data";
option spawnOrder = {-1, 2, 1, -1, -1, -1, -1, -1};
option unknownScriptId = 0;
option unknownScriptId2 = 0;
option weatherProbability = {100, 0, 0};
option trapOffset = 0x30000b0;

//======================================================================
//               Global and scratchpad variable imports               //
//======================================================================
import global   short   global_flag[256] = 0x00;
import global   int     mp_map_flg = 0x0910;
import global   u_char  global_var_1 = 0x09df;
import global   u_char  global_var_2 = 0x09e0;
import global   u_char  global_var_3 = 0x09e1;
import global   u_char  global_var_4 = 0x09e2;
import global   u_char  global_var_5 = 0x09e3;
import global   u_char  global_var_6 = 0x09e4;
import global   u_short global_var_7 = 0x0cf4;
import scratch1 short   scratch1_var_1 = 0x06;
import scratch1 short   scratch1_var_2 = 0x0c;

actor setup(0)
{

	function init()
	{
		return;
	}

	function battle()
	{
		btlAtelSetupActorStart();
		btlAtelSetEntryStruct(0x03000044);
		return;
	}

	function event()
	{
		if (nowmap() == 0x0483)
		{
			stopenvsoundall();
			setcharseplayall(0);
			musicfadeout(-1, 180);
			musicfadeoutsync();
			musicstop(-1);
			wait(1);
			musicclear(-1);
			if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicread(20);
			}
			else
			{
				musicread(91);
			}
		}
		if (nowmap() == 0x0493)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x0493)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(35);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x0493 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04a3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04a3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(45);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04a3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04b3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04b3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(15);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04b3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04c3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04c3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(85);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04c3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04d3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04d3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(60);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04d3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04e3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04e3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(88);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04e3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x04f3)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x04f3)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(48);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x04f3 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x0503)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x0503)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(75);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x0503 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		if (nowmap() == 0x0513)
		{
			stopenvsoundall();
			setcharseplayall(0);
			if (global_var_7 >= 0x0513)
			{
				musicfadeout(-1, 180);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicread(57);
				}
				else
				{
					musicread(91);
				}
			}
			if ((global_var_7 < 0x0513 && ((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicplay(86);
			}
		}
		return;
	}
}

actor btl_trap_ctrl(0)
{

	function init()
	{
		modelread(0x03000001);
		modelreadsync(0x03000001);
		settrapresource(0x03000001);
		return;
	}
}

actor Map_Trial_Common_Process(0)
{

	//======================================================================
	//                   Local (script) scope variables                   //
	//======================================================================
	char    local_var_s2f0_1;        // pos: 0x00;

	function init()
	{
		local_var_s2f0_1 = 0;
		switch (nowmap())
		{
			case 0x04c4:
				local_var_s2f0_1 = 1;
				mp_map_flg = 0;
				break;
			case 0x049c:
			case 0x04d7:
				local_var_s2f0_1 = 1;
				mp_map_flg = 1;
				break;
			case 0x0506:
				local_var_s2f0_1 = 1;
				mp_map_flg = 2;
				break;
			case 0x04ed:
				local_var_s2f0_1 = 1;
				mp_map_flg = 5;
				break;
			case 0x0513:
				local_var_s2f0_1 = 1;
				mp_map_flg = 4;
				break;
			case 0x0503:
				local_var_s2f0_1 = 1;
				mp_map_flg = 3;
				break;
			case 0x051e:
				break;
			default:
				clear_field_effect(mp_map_flg);
				break;
		}
		if (local_var_s2f0_1 == 1)
		{
			set_field_effect(mp_map_flg);
		}
		for (regI0 = 1; regI0 < 16; regI0 = (regI0 + 1))
		{
			setmapidmj(regI0, 0, 0);
			setmapidmj(regI0, 7, 0);
			setmapidmj(regI0, 1, 0);
			setmapidmj(regI0, 2, 0);
			setmapidmj(regI0, 3, 0);
			setmapidmj(regI0, 9, 0);
		}
		switch (nowmap())
		{
			case 0x049f:
			case 0x04e7:
			case 0x04eb:
			case 0x04ec:
			case 0x04ed:
				showmapmodel(2);
				hidemapmodel(1);
				setmapidfloor(1, 0, 0);
				setmapidfloor(1, 7, 0);
				setmapidfloor(1, 1, 0);
				setmapidfloor(1, 2, 0);
				setmapidfloor(1, 3, 1);
				setmapidfloor(1, 9, 0);
				setmapidwall(1, 5, 0);
				setmapidwall(1, 6, 0);
				break;
			case 0x04b5:
			case 0x04b6:
			case 0x04d4:
			case 0x04d5:
				setmapidfloor(1, 0, 0);
				setmapidfloor(1, 7, 0);
				setmapidfloor(1, 1, 0);
				setmapidfloor(1, 2, 0);
				setmapidfloor(1, 3, 1);
				setmapidfloor(1, 9, 0);
				setmapidwall(1, 5, 0);
				setmapidwall(1, 6, 0);
				break;
			case 0x04bd:
			case 0x04be:
				setmapidfloor(1, 0, 0);
				setmapidfloor(1, 7, 0);
				setmapidfloor(1, 1, 0);
				setmapidfloor(1, 2, 0);
				setmapidfloor(1, 3, 0);
				setmapidfloor(1, 4, 0);
				setmapidfloor(1, 9, 0);
				setmapidwall(1, 5, 0);
				setmapidwall(1, 6, 0);
				setmapidfloor(2, 0, 0);
				setmapidfloor(2, 7, 0);
				setmapidfloor(2, 1, 0);
				setmapidfloor(2, 2, 0);
				setmapidfloor(2, 3, 0);
				setmapidfloor(2, 4, 0);
				setmapidfloor(2, 9, 0);
				setmapidwall(2, 5, 0);
				setmapidwall(2, 6, 0);
				break;
			case 0x04c5:
			case 0x0507:
			case 0x050b:
				bganimeplay_9e(0, 0, 0);
				bganimeplay_9e(1, 0, 0);
				setmapidwall(4, 5, 1);
				setmapidwall(4, 6, 1);
				setmapidfloor(2, 0, 0);
				setmapidfloor(2, 7, 0);
				setmapidfloor(2, 1, 0);
				setmapidfloor(2, 2, 0);
				setmapidfloor(2, 3, 0);
				bganimeplay_9e(3, 0, 0);
				bganimeplay_9e(4, 0, 0);
				bganimeplay_9e(5, 0, 0);
				bganimeplay_9e(6, 0, 0);
				bganimeplay_9e(7, 0, 0);
				bganimeplay_9e(8, 0, 0);
				bganimeplay_9e(2, 150, 150);
				setmapidfloor(1, 0, 0);
				setmapidfloor(1, 7, 0);
				setmapidfloor(1, 1, 0);
				setmapidfloor(1, 2, 0);
				setmapidfloor(1, 3, 0);
				setmapidfloor(1, 4, 0);
				setmapidfloor(1, 9, 0);
				setmapidwall(1, 5, 0);
				setmapidwall(1, 6, 0);
				break;
			case 0x04d3:
			case 0x04e3:
			case 0x0506:
			case 0x04e5:
			case 0x04e6:
				bganimeplay_9e(0, 0x0190, 0x0190);
				bganimeplay_9e(1, 0x0190, 0x0190);
				break;
		}
		return;
	}
}

actor トライアル監督(0)
{

	function init()
	{
		if (nowmap() == 0x0483)
		{
			fadecancel_15a(2);
			fadeout(0);
			sethpmenu(0);
			ucoff();
			settrapshowstatus(0);
			suspendbattle();
		}
		if (!(unkCall_5be()))
		{
			if (((((((((nowmap() == 0x0493 || nowmap() == 0x04a3) || nowmap() == 0x04b3) || nowmap() == 0x04c3) || nowmap() == 0x04d3) || nowmap() == 0x04e3) || nowmap() == 0x04f3) || nowmap() == 0x0503) || nowmap() == 0x0513))
			{
				fadecancel_15a(2);
				fadeout(0);
				sethpmenu(0);
				ucoff();
				settrapshowstatus(0);
				suspendbattle();
			}
		}
		registshape(0x03000100);
		unkCall_59d(0);
		shapewin(3, 0, 0, 0x0780, 0x0438, 0);
		setshape(3, 0, 0, 0);
		setshape(3, 4, 0, 1);
		setshapeshowstatus(3, 0, 0);
		setshapeshowstatus(3, 1, 0);
		setshapeshowstatus(3, 2, 0);
		setshapeshowstatus(3, 3, 0);
		setshapeshowstatus(3, 4, 0);
		setshapepos_183(3, 0, 0x063a, 0x0170, 0);
		setshapepos_183(3, 4, 0x063a, 0x0170, 0);
		if (((((((((((((((((((((((((nowmap() == 0x048f || nowmap() == 0x0495) || nowmap() == 0x0497) || nowmap() == 0x049b) || nowmap() == 0x049d) || nowmap() == 0x049e) || nowmap() == 0x04a3) || nowmap() == 0x04ae) || nowmap() == 0x04b4) || nowmap() == 0x04b7) || nowmap() == 0x04be) || nowmap() == 0x04c4) || nowmap() == 0x04ce) || nowmap() == 0x04cf) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x050c) || nowmap() == 0x050e) || nowmap() == 0x050f) || nowmap() == 0x0516) || nowmap() == 0x0517) || nowmap() == 0x051c) || nowmap() == 0x051d) || nowmap() == 0x051e))
		{
			bossgaugeinit();
		}
		return;
	}

	//======================================================================
	//                   Local (script) scope variables                   //
	//======================================================================
	u_char  local_var_s3f1_1;        // pos: 0x30;
	u_short local_var_s3f1_2;        // pos: 0x00;
	u_char  local_var_s3f1_3;        // pos: 0x20;

	function main(1)
	{
		if (nowmap() == 0x0483)
		{
			global_var_7 = 0x0483;
			if (nowmap() == 0x0483)
			{
				questeffectread_1db(0, 47);
			}
			else
			{
				questeffectread_1db(0, 48);
			}
			effectreadsync();
			if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
			{
				musicreadsync(20);
				musicplay(20);
			}
			else
			{
				musicreadsync(91);
				musicplay(91);
			}
			setnowmapmusicno(20);
			startenvsoundall();
			setcharseplayall(1);
			sethpmenufast(0);
			fadein(fadesystemtime());
			fadesync();
			effectplay(0);
			effectsync();
			effectcancel();
			sethpmenu(1);
			resumebattle();
			ucon();
			sethpmenu(1);
			clear_force_char_nearfade();
			setmaphighmodeldepth(-1);
			setmapmodelstatus(1);
			setstatuserrordispdenystatus(0);
			settrapshowstatus(1);
		}
		if (!(unkCall_5be()))
		{
			if (nowmap() == 0x0493)
			{
				if (global_var_7 < 0x0493)
				{
					global_var_7 = 0x0493;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(35);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(35);
					musicplay(35);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(35);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04a3)
			{
				if (global_var_7 < 0x04a3)
				{
					global_var_7 = 0x04a3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(45);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(45);
					musicplay(45);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(45);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04b3)
			{
				if (global_var_7 < 0x04b3)
				{
					global_var_7 = 0x04b3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(15);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(15);
					musicplay(15);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(15);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04c3)
			{
				if (global_var_7 < 0x04c3)
				{
					global_var_7 = 0x04c3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(85);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(85);
					musicplay(85);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(85);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04d3)
			{
				if (global_var_7 < 0x04d3)
				{
					global_var_7 = 0x04d3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(60);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(60);
					musicplay(60);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(60);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04e3)
			{
				if (global_var_7 < 0x04e3)
				{
					global_var_7 = 0x04e3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(88);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(88);
					musicplay(88);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(88);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x04f3)
			{
				if (global_var_7 < 0x04f3)
				{
					global_var_7 = 0x04f3;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(48);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(48);
					musicplay(48);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(48);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x0503)
			{
				if (global_var_7 < 0x0503)
				{
					global_var_7 = 0x0503;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(75);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(75);
					musicplay(75);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(75);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
			if (nowmap() == 0x0513)
			{
				if (global_var_7 < 0x0513)
				{
					global_var_7 = 0x0513;
					sethpmenufast(0);
					fadelayer(5);
					fadeout_d0(1, 1);
					fadesync_d3(1);
					fadein(1);
					fadesync();
					amest(0, 0x01000000, 60, 0x0411, 1);
					amest(1, 0x01000001, 0x03c0, 0x021c, 4);
					messync2(0);
					messync2(1);
					mkeywaitt(get_pad_ok());
					mkeywaittr(get_pad_ok());
					sebsoundplay(0, 2);
					mesclose(0);
					mesclose(1);
					messync(0, 1);
					wait(30);
					regI0 = nowjumpindex();
					if ((nowmap() == 0x0193 && global_flag[0] < 0x0541))
					{
						healall(0);
					}
					else if (!((nowmap() == 0x033a && global_flag[0] == 0x17a2)))
					{
						if (!((nowmap() == 187 && global_flag[0] == 0x0c30)))
						{
							if (nowmap() >= 0x0483)
							{
								healall(5);
							}
							else
							{
								setnowjumpindex(-2);
							}
						}
					}
					openfullscreenmenu_48d(0x8005, 0);
					setnowjumpindex(regI0);
					fadeout(1);
					fadesync();
					fadein_d2(1, 1);
					fadesync_d3(1);
					sethpmenufast(1);
					musicfadeout(-1, 90);
					musicfadeoutsync();
					musicstop(-1);
					wait(1);
					musicclear(-1);
					if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
					{
						musicread(57);
					}
					else
					{
						musicread(91);
					}
					wait(50);
				}
				if (nowmap() == 0x0483)
				{
					questeffectread_1db(0, 47);
				}
				else
				{
					questeffectread_1db(0, 48);
				}
				effectreadsync();
				if (!(((getsummonmodebit() || getchocobomodebit()) && !(istownmap()))))
				{
					musicreadsync(57);
					musicplay(57);
				}
				else
				{
					musicreadsync(91);
					musicplay(91);
				}
				setnowmapmusicno(57);
				startenvsoundall();
				setcharseplayall(1);
				sethpmenufast(0);
				fadein(fadesystemtime());
				fadesync();
				effectplay(0);
				effectsync();
				effectcancel();
				sethpmenu(1);
				resumebattle();
				ucon();
				sethpmenu(1);
				clear_force_char_nearfade();
				setmaphighmodeldepth(-1);
				setmapmodelstatus(1);
				setstatuserrordispdenystatus(0);
				settrapshowstatus(1);
			}
		}
		unkCall_5bf();
		if ((nowmap() >= 0x0483 && nowmap() <= 0x0487))
		{
			local_var_s3f1_1 = 1;
			if ((nowmap() > 0x0483 && nowmap() <= 0x0487))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x0483));
			}
		}
		if ((nowmap() >= 0x048b && nowmap() <= 0x048f))
		{
			local_var_s3f1_1 = 6;
			if ((nowmap() > 0x048b && nowmap() <= 0x048f))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x048b));
			}
		}
		if ((nowmap() >= 0x0493 && nowmap() <= 0x0497))
		{
			local_var_s3f1_1 = 11;
			if ((nowmap() > 0x0493 && nowmap() <= 0x0497))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x0493));
			}
		}
		if ((nowmap() >= 0x049b && nowmap() <= 0x049f))
		{
			local_var_s3f1_1 = 16;
			if ((nowmap() > 0x049b && nowmap() <= 0x049f))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x049b));
			}
		}
		if ((nowmap() >= 0x04a3 && nowmap() <= 0x04a7))
		{
			local_var_s3f1_1 = 21;
			if ((nowmap() > 0x04a3 && nowmap() <= 0x04a7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04a3));
			}
		}
		if ((nowmap() >= 0x04ab && nowmap() <= 0x04af))
		{
			local_var_s3f1_1 = 26;
			if ((nowmap() > 0x04ab && nowmap() <= 0x04af))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04ab));
			}
		}
		if ((nowmap() >= 0x04b3 && nowmap() <= 0x04b7))
		{
			local_var_s3f1_1 = 31;
			if ((nowmap() > 0x04b3 && nowmap() <= 0x04b7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04b3));
			}
		}
		if ((nowmap() >= 0x04bb && nowmap() <= 0x04bf))
		{
			local_var_s3f1_1 = 36;
			if ((nowmap() > 0x04bb && nowmap() <= 0x04bf))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04bb));
			}
		}
		if ((nowmap() >= 0x04c3 && nowmap() <= 0x04c7))
		{
			local_var_s3f1_1 = 41;
			if ((nowmap() > 0x04c3 && nowmap() <= 0x04c7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04c3));
			}
		}
		if ((nowmap() >= 0x04cb && nowmap() <= 0x04cf))
		{
			local_var_s3f1_1 = 46;
			if ((nowmap() > 0x04cb && nowmap() <= 0x04cf))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04cb));
			}
		}
		if ((nowmap() >= 0x04d3 && nowmap() <= 0x04d7))
		{
			local_var_s3f1_1 = 51;
			if ((nowmap() > 0x04d3 && nowmap() <= 0x04d7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04d3));
			}
		}
		if ((nowmap() >= 0x04db && nowmap() <= 0x04df))
		{
			local_var_s3f1_1 = 56;
			if ((nowmap() > 0x04db && nowmap() <= 0x04df))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04db));
			}
		}
		if ((nowmap() >= 0x04e3 && nowmap() <= 0x04e7))
		{
			local_var_s3f1_1 = 61;
			if ((nowmap() > 0x04e3 && nowmap() <= 0x04e7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04e3));
			}
		}
		if ((nowmap() >= 0x04eb && nowmap() <= 0x04ef))
		{
			local_var_s3f1_1 = 66;
			if ((nowmap() > 0x04eb && nowmap() <= 0x04ef))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04eb));
			}
		}
		if ((nowmap() >= 0x04f3 && nowmap() <= 0x04f7))
		{
			local_var_s3f1_1 = 71;
			if ((nowmap() > 0x04f3 && nowmap() <= 0x04f7))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04f3));
			}
		}
		if ((nowmap() >= 0x04fb && nowmap() <= 0x04ff))
		{
			local_var_s3f1_1 = 76;
			if ((nowmap() > 0x04fb && nowmap() <= 0x04ff))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x04fb));
			}
		}
		if ((nowmap() >= 0x0503 && nowmap() <= 0x0507))
		{
			local_var_s3f1_1 = 81;
			if ((nowmap() > 0x0503 && nowmap() <= 0x0507))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x0503));
			}
		}
		if ((nowmap() >= 0x050b && nowmap() <= 0x050f))
		{
			local_var_s3f1_1 = 86;
			if ((nowmap() > 0x050b && nowmap() <= 0x050f))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x050b));
			}
		}
		if ((nowmap() >= 0x0513 && nowmap() <= 0x0517))
		{
			local_var_s3f1_1 = 91;
			if ((nowmap() > 0x0513 && nowmap() <= 0x0517))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x0513));
			}
		}
		if ((nowmap() >= 0x051b && nowmap() <= 0x051f))
		{
			local_var_s3f1_1 = 96;
			if ((nowmap() > 0x051b && nowmap() <= 0x051f))
			{
				local_var_s3f1_1 = (local_var_s3f1_1 + (nowmap() - 0x051b));
			}
		}
		if (((((((((nowmap() == 0x049c || nowmap() == 0x04c4) || nowmap() == 0x04d7) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x0513) || nowmap() == 0x0517) || nowmap() == 0x051e))
		{
			setshapepos_183(3, 4, 0x064e, 124, 0);
			setshapeshowstatus(3, 4, 1);
			regI0 = ((local_var_s3f1_1 / 100) % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI0 = 9;
			}
			setshape(3, 1, 1, (0 + regI0));
			setshapepos_183(3, 1, 0x06b5, 126, 0);
			if (regI0 != 0)
			{
				setshapeshowstatus(3, 1, 1);
			}
			else
			{
				setshapeshowstatus(3, 1, 0);
			}
			regI1 = ((local_var_s3f1_1 / 10) % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI1 = 9;
			}
			setshape(3, 2, 1, (0 + regI1));
			setshapepos_183(3, 2, 0x06cd, 126, 0);
			if ((regI0 != 0 || regI1 != 0))
			{
				setshapeshowstatus(3, 2, 1);
			}
			else
			{
				setshapeshowstatus(3, 2, 0);
			}
			regI2 = (local_var_s3f1_1 % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI2 = 9;
			}
			setshape(3, 3, 1, (0 + regI2));
			setshapepos_183(3, 3, 0x06e5, 126, 0);
			setshapeshowstatus(3, 3, 1);
		}
		else
		{
			setshapepos_183(3, 4, 0x064e, 58, 0);
			setshapeshowstatus(3, 4, 1);
			regI0 = ((local_var_s3f1_1 / 100) % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI0 = 9;
			}
			setshape(3, 1, 1, (0 + regI0));
			setshapepos_183(3, 1, 0x06b5, 60, 0);
			if (regI0 != 0)
			{
				setshapeshowstatus(3, 1, 1);
			}
			else
			{
				setshapeshowstatus(3, 1, 0);
			}
			regI1 = ((local_var_s3f1_1 / 10) % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI1 = 9;
			}
			setshape(3, 2, 1, (0 + regI1));
			setshapepos_183(3, 2, 0x06cd, 60, 0);
			if ((regI0 != 0 || regI1 != 0))
			{
				setshapeshowstatus(3, 2, 1);
			}
			else
			{
				setshapeshowstatus(3, 2, 0);
			}
			regI2 = (local_var_s3f1_1 % 10);
			if (local_var_s3f1_1 > 0x03e7)
			{
				regI2 = 9;
			}
			setshape(3, 3, 1, (0 + regI2));
			setshapepos_183(3, 3, 0x06e5, 60, 0);
			setshapeshowstatus(3, 3, 1);
		}
		if (((((((((((((((((((((((((nowmap() == 0x048f || nowmap() == 0x0495) || nowmap() == 0x0497) || nowmap() == 0x049b) || nowmap() == 0x049d) || nowmap() == 0x049e) || nowmap() == 0x04a3) || nowmap() == 0x04ae) || nowmap() == 0x04b4) || nowmap() == 0x04b7) || nowmap() == 0x04be) || nowmap() == 0x04c4) || nowmap() == 0x04ce) || nowmap() == 0x04cf) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x050c) || nowmap() == 0x050e) || nowmap() == 0x050f) || nowmap() == 0x0516) || nowmap() == 0x0517) || nowmap() == 0x051c) || nowmap() == 0x051d) || nowmap() == 0x051e))
		{
			bossgaugeopen();
		}
		waitv(&scratch1_var_1);
		if (nowmap() != 0x051f)
		{
			ucoff();
			if (!(((((((((((((((((((((((((nowmap() == 0x048f || nowmap() == 0x0495) || nowmap() == 0x0497) || nowmap() == 0x049b) || nowmap() == 0x049d) || nowmap() == 0x049e) || nowmap() == 0x04a3) || nowmap() == 0x04ae) || nowmap() == 0x04b4) || nowmap() == 0x04b7) || nowmap() == 0x04be) || nowmap() == 0x04c4) || nowmap() == 0x04ce) || nowmap() == 0x04cf) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x050c) || nowmap() == 0x050e) || nowmap() == 0x050f) || nowmap() == 0x0516) || nowmap() == 0x0517) || nowmap() == 0x051c) || nowmap() == 0x051d) || nowmap() == 0x051e)))
			{
				suspendbattle_no_resetmotion();
			}
			party_motionsync_and_relax();
			if (((((((((((((((((((((((((nowmap() == 0x048f || nowmap() == 0x0495) || nowmap() == 0x0497) || nowmap() == 0x049b) || nowmap() == 0x049d) || nowmap() == 0x049e) || nowmap() == 0x04a3) || nowmap() == 0x04ae) || nowmap() == 0x04b4) || nowmap() == 0x04b7) || nowmap() == 0x04be) || nowmap() == 0x04c4) || nowmap() == 0x04ce) || nowmap() == 0x04cf) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x050c) || nowmap() == 0x050e) || nowmap() == 0x050f) || nowmap() == 0x0516) || nowmap() == 0x0517) || nowmap() == 0x051c) || nowmap() == 0x051d) || nowmap() == 0x051e))
			{
				bossgaugeclose();
				wait(30);
			}
			battlelastseplaysync(0);
			if (((((((((((((((((((((((((nowmap() == 0x048f || nowmap() == 0x0495) || nowmap() == 0x0497) || nowmap() == 0x049b) || nowmap() == 0x049d) || nowmap() == 0x049e) || nowmap() == 0x04a3) || nowmap() == 0x04ae) || nowmap() == 0x04b4) || nowmap() == 0x04b7) || nowmap() == 0x04be) || nowmap() == 0x04c4) || nowmap() == 0x04ce) || nowmap() == 0x04cf) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x050c) || nowmap() == 0x050e) || nowmap() == 0x050f) || nowmap() == 0x0516) || nowmap() == 0x0517) || nowmap() == 0x051c) || nowmap() == 0x051d) || nowmap() == 0x051e))
			{
				suspendbattle();
			}
			if (((((((((nowmap() == 0x048f || nowmap() == 0x049f) || nowmap() == 0x04af) || nowmap() == 0x04bf) || nowmap() == 0x04cf) || nowmap() == 0x04df) || nowmap() == 0x04ef) || nowmap() == 0x04ff) || nowmap() == 0x050f))
			{
				PC00.resetemergency_one(1);
				PC01.resetemergency_one(1);
				PC02.resetemergency_one(1);
				PC03.resetemergency_one(1);
				musicfadeout(-1, 60);
				stopenvsound_3de(60);
				spotsoundtrans(60, 0);
				questeffectread_1db(0, 43);
				musicfadeoutsync();
				musicstop(-1);
				wait(1);
				musicclear(-1);
				sethpmenu(0);
				musicread(86);
				musicreadsync(86);
				effectreadsync_e1(0);
				musicplay(86);
				effectplay_e2(0, 0);
				wait(30);
				effectplay_e2(0, 1);
				wait(90);
				effectplay_e2(0, 2);
				effectsync_e3(0);
				effectcancel();
				wait(15);
				if (nowmap() == 0x048f)
				{
					sebsoundplay(0, 39);
					additemmes(0x9123, 1);
				}
				if (nowmap() == 0x049f)
				{
					sebsoundplay(0, 39);
					additemmes(0x9124, 1);
				}
				if (nowmap() == 0x04af)
				{
					sebsoundplay(0, 39);
					additemmes(0x9125, 1);
				}
				if (nowmap() == 0x04bf)
				{
					sebsoundplay(0, 39);
					additemmes(0x9126, 1);
				}
				if (nowmap() == 0x04cf)
				{
					sebsoundplay(0, 39);
					additemmes(0x9127, 1);
					unkCall_5ad(39);
				}
				if (nowmap() == 0x04df)
				{
					sebsoundplay(0, 39);
					additemmes(0x9128, 1);
				}
				if (nowmap() == 0x04ef)
				{
					sebsoundplay(0, 39);
					additemmes(0x9129, 1);
				}
				if (nowmap() == 0x04ff)
				{
					sebsoundplay(0, 39);
					additemmes(0x912a, 1);
				}
				if (nowmap() == 0x050f)
				{
					sebsoundplay(0, 39);
					additemmes(0x912b, 1);
				}
				wait(20);
			}
			else
			{
				wait(30);
			}
			fadeout(15);
			fadesync();
			bosskillall();
			zakokillall();
			clear_activelog();
			clearnavimapfootmark();
			if ((((((((nowmap() == 0x049c || nowmap() == 0x04c4) || nowmap() == 0x04d7) || nowmap() == 0x04ed) || nowmap() == 0x0503) || nowmap() == 0x0506) || nowmap() == 0x0513) || nowmap() == 0x051e))
			{
				clear_field_effect(mp_map_flg);
			}
			local_var_s3f1_2 = (nowmap() + 1);
			if (nowmap() == 0x0487)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x048f)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x0497)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x049f)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04a7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04af)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04b7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04bf)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04c7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04cf)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04d7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04df)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04e7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04ef)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04f7)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x04ff)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x0507)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x050f)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x0517)
			{
				local_var_s3f1_2 = (local_var_s3f1_2 + 3);
			}
			if (nowmap() == 0x0483)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x0484)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x0485)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0486)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x0487)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x048b)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x048c)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x048d)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x048e)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x048f)
			{
				local_var_s3f1_3 = 11;
			}
			if (nowmap() == 0x0493)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0494)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x0495)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x0496)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x0497)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x049b)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x049c)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x049d)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x049e)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x049f)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04a3)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04a4)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04a5)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04a6)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04a7)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ab)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ac)
			{
				local_var_s3f1_3 = 8;
			}
			if (nowmap() == 0x04ad)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ae)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04af)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04b3)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04b4)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04b5)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04b6)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04b7)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04bb)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04bc)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04bd)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04be)
			{
				local_var_s3f1_3 = 11;
			}
			if (nowmap() == 0x04bf)
			{
				local_var_s3f1_3 = 11;
			}
			if (nowmap() == 0x04c3)
			{
				local_var_s3f1_3 = 11;
			}
			if (nowmap() == 0x04c4)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04c5)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04c6)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04c7)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04cb)
			{
				local_var_s3f1_3 = 6;
			}
			if (nowmap() == 0x04cc)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04cd)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ce)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04cf)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04d3)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04d4)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x04d5)
			{
				local_var_s3f1_3 = 19;
			}
			if (nowmap() == 0x04d6)
			{
				local_var_s3f1_3 = 19;
			}
			if (nowmap() == 0x04d7)
			{
				local_var_s3f1_3 = 19;
			}
			if (nowmap() == 0x04db)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04dc)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04dd)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04de)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04df)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04e3)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04e4)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04e5)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04e6)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04e7)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04eb)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ec)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04ed)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04ee)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04ef)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x04f3)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x04f4)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04f5)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04f6)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04f7)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04fb)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04fc)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04fd)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04fe)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x04ff)
			{
				local_var_s3f1_3 = 2;
			}
			if (nowmap() == 0x0503)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x0504)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x0505)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0506)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0507)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x050b)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x050c)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x050d)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x050e)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x050f)
			{
				local_var_s3f1_3 = 5;
			}
			if (nowmap() == 0x0513)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0514)
			{
				local_var_s3f1_3 = 4;
			}
			if (nowmap() == 0x0515)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x0516)
			{
				local_var_s3f1_3 = 19;
			}
			if (nowmap() == 0x0517)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x051b)
			{
				local_var_s3f1_3 = 3;
			}
			if (nowmap() == 0x051c)
			{
				local_var_s3f1_3 = 0;
			}
			if (nowmap() == 0x051d)
			{
				local_var_s3f1_3 = 20;
			}
			if (nowmap() == 0x051e)
			{
				local_var_s3f1_3 = 2;
			}
			fadeout_d0(2, 0);
			fadesync_d3(2);
			fadein(0);
			wait(1);
			mapjump(local_var_s3f1_2, local_var_s3f1_3, 1);
		}
		else
		{
			ucoff();
			suspendbattle_no_resetmotion();
			party_motionsync_and_relax();
			battlelastseplaysync(0);
			setnowmapmusicno(-1);
			scratch1_var_2 = 1;
			unkCall_5ad(40);
			wait(20);
			musicfadeout_231(getnowmapmusicno(), 60, 1);
			musicfadeout_231(getnowmusicno(), 60, 1);
			stopenvsound_3de(60);
			spotsoundtrans(60, 0);
			fadeout(15);
			fadesync();
			unkCall_5ba(0);
			bosskillall();
			zakokillall();
			clear_activelog();
			clearnavimapfootmark();
			musicplaysync(getnowmusicno());
			unkCall_3083();
			wait(1);
			partyusemapid(1);
			setposparty(128, 3.20000005, 128, 0);
			eventread_e8(0, 0x01ab);
			eventreadsync();
			eventplay_ec(0);
			eventsync_ee(0);
			spotsoundtrans(0, 127);
			startenvsoundall();
			unkCall_5ba(1);
			fadeout_d0(2, 0);
			fadesync_d3(2);
			fadein(0);
			wait(1);
			mapjump(0x047b, 0, 1);
		}
		return;
	}
}

actor Map_Director(0)
{

	function init()
	{
		hidemapmodel(11);
		showmapmodel(10);
		bganimeplay_9e(20, 0, 0);
		setnavimapindex(0);
		hidemapmodel(20);
		if (global_var_1 == 0)
		{
			showmapmodel(4);
			hidemapmodel(19);
			bganimeplay_9e(0, 145, 145);
			bganimeplay_9e(6, 0, 0);
			if (global_var_2 == 1)
			{
				showmapmodel(18);
			}
		}
		else
		{
			hidemapmodel(4);
			showmapmodel(19);
			hidemapmodel(18);
			bganimeplay_9e(0, 0x0122, 0x0122);
			bganimeplay_9e(6, 95, 95);
			bgeffectplay(48);
			bgeffectplay(41);
			bgeffectplay(42);
		}
		if (global_var_2 == 0)
		{
			hidemapmodel(17);
			showmapmodel(3);
			bganimeplay_9e(1, 145, 145);
			bganimeplay_9e(7, 0, 0);
		}
		else
		{
			showmapmodel(17);
			bganimeplay_9e(1, 0x0122, 0x0122);
			bganimeplay_9e(7, 95, 95);
			bgeffectplay(49);
			if (global_var_1 == 1)
			{
				bgeffectplay(43);
				hidemapmodel(3);
			}
		}
		if (global_var_3 == 0)
		{
			hidemapmodel(13);
			showmapmodel(1);
			bganimeplay_9e(2, 145, 145);
			bganimeplay_9e(8, 0, 0);
		}
		else
		{
			showmapmodel(13);
			hidemapmodel(1);
			bganimeplay_9e(2, 0x0122, 0x0122);
			bganimeplay_9e(8, 95, 95);
			bgeffectplay(50);
			if (global_var_4 == 1)
			{
				hidemapmodel(1);
				bgeffectplay(45);
			}
		}
		if (global_var_4 == 0)
		{
			hidemapmodel(12);
			if (global_var_3 == 1)
			{
				showmapmodel(14);
			}
			showmapmodel(0);
			bganimeplay_9e(3, 145, 145);
			bganimeplay_9e(9, 0, 0);
		}
		else
		{
			showmapmodel(12);
			hidemapmodel(14);
			hidemapmodel(0);
			bganimeplay_9e(3, 0x0122, 0x0122);
			bganimeplay_9e(9, 95, 95);
			bgeffectplay(51);
			bgeffectplay(46);
			bgeffectplay(47);
		}
		if (global_var_5 == 0)
		{
			bganimeplay_9e(4, 145, 145);
			hidemapmodel(15);
		}
		else
		{
			if ((global_var_3 == 1 && global_var_4 == 1))
			{
				bgeffectplay(57);
			}
			else
			{
				bgeffectplay(56);
			}
			bganimeplay_9e(4, 0x0122, 0x0122);
			showmapmodel(15);
		}
		if (global_var_6 == 0)
		{
			bganimeplay_9e(5, 145, 145);
			hidemapmodel(16);
		}
		else
		{
			if ((global_var_1 == 1 && global_var_2 == 1))
			{
				bgeffectplay(53);
			}
			else
			{
				bgeffectplay(52);
			}
			bganimeplay_9e(5, 0x0122, 0x0122);
			if (((global_var_5 == 1 || global_var_2 == 1) || global_var_3 == 1))
			{
				showmapmodel(16);
				hidemapmodel(2);
			}
			else
			{
				hidemapmodel(16);
			}
		}
		return;
	}
}

actor PC00(5) : 0x80
{

	function init()
	{
		setupbattle(0);
		return;
	}
}

actor PC01(5) : 0x81
{

	function init()
	{
		setupbattle(1);
		return;
	}
}

actor PC02(5) : 0x82
{

	function init()
	{
		setupbattle(2);
		return;
	}
}

actor PC03(5) : 0x83
{

	function init()
	{
		setupbattle(3);
		return;
	}
}

actor treasure_00(6)
{

	function init()
	{
		setuptreasure(0x03000080);
		npc_to_gimmick();
		btlAtelTreasureInitWithRange(0.5, 5);
		setnpcname(0x01b2);
		return;
	}

	function talk(2)
	{
		sethpmenu(0);
		ucoff();
		settrapshowstatus(0);
		btlAtelOpenTreasureStart();
		char treasure0011[] = { 0x00 ,0x00 ,0x00 ,0x00 ,0xD6 ,0x05 ,0x38 ,0x05 ,0x40 ,0xFF ,0x64 ,0x00 ,0xD7 ,0x80 ,0xD7 ,0x80 ,0xD7 ,0x80 ,0xD7 ,0x80 ,0x0A ,0x00 ,0x64 ,0x00}
		char *ptrtreasure0011 = treasure0011
		talktreasure(ptrtreasure0011);
		sethpmenu_436(0, 5);
		btlAtelOpenTreasureMessage(ptrtreasure0011);
		sethpmenu_436(1, 5);
		talktreasureafter(ptrtreasure0011);
		btlAtelOpenTreasureFinish();
		ucon();
		sethpmenu(1);
		clear_force_char_nearfade();
		setmaphighmodeldepth(-1);
		setmapmodelstatus(1);
		setstatuserrordispdenystatus(0);
		settrapshowstatus(1);
		return;
	}
}

actor treasure_01(6)
{

	function init()
	{
		setuptreasure(0x03000098);
		npc_to_gimmick();
		btlAtelTreasureInitWithRange(0.5, 5);
		setnpcname(0x01b2);
		return;
	}

	function talk(2)
	{
		sethpmenu(0);
		ucoff();
		settrapshowstatus(0);
		btlAtelOpenTreasureStart();
		talktreasure(0x03000098);
		sethpmenu_436(0, 5);
		btlAtelOpenTreasureMessage(0x03000098);
		sethpmenu_436(1, 5);
		talktreasureafter(0x03000098);
		btlAtelOpenTreasureFinish();
		ucon();
		sethpmenu(1);
		clear_force_char_nearfade();
		setmaphighmodeldepth(-1);
		setmapmodelstatus(1);
		setstatuserrordispdenystatus(0);
		settrapshowstatus(1);
		return;
	}
}

//======================================================================
//                        File scope variables                        //
//======================================================================
char    file_var_s11_1;          // pos: 0xc0;

actor trial_00(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(0);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(1, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x03000038);
		btlAtelSetPoint2(0x03000008);
		btlAtelInitTagFinish();
		return;
	}
}

actor trial_01(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(1);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(1, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x0300003a);
		btlAtelSetPoint2(0x03000010);
		btlAtelInitTagFinish();
		return;
	}
}

actor trial_02(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(2);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(1, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x0300003c);
		btlAtelSetPoint2(0x03000018);
		btlAtelInitTagFinish();
		return;
	}
}

actor trial_03(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(0);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(2, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x0300003e);
		btlAtelSetPoint2(0x03000020);
		btlAtelInitTagFinish();
		return;
	}
}

actor trial_04(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(1);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(2, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x03000040);
		btlAtelSetPoint2(0x03000028);
		btlAtelInitTagFinish();
		return;
	}
}

actor trial_05(7)
{

	spawnGroup
	{
		fn_entry entry00()
		{
			btlAtelSetUnit(2);
			btlAtelSetDirection(-1);
			btlAtelSetDefaultLogic(0);
			btlAtelSetHpLowLimit(0);
			btlAtelSetLevel(1, 0);
			btlAtelSetEventFlagGroup(1, 0);
			btlAtelSetCallGroup(0);
			btlAtelSetUnitType(0);
			btlAtelSetBelong(2, 0);
			btlAtelSetEntryFlag(16);
			btlAtelSetSpecialSpawnRange(-1);
			btlAtelSetDeSpawnType(0, 0, 0);
			btlAtelSetStatus(0x03000000);
			btlAtelSetAbility(0x40000000, 0x04000000);
			btlAtelSetEventData(-1, -1, -1);
			btlAtelSetUnitFinish();
			return;
		}

		fn_spawn spawn00()
		{
			btlAtelSpawnTagStart();
			if (btlAtelDecideEntryGroupByContinuous() == -1)
			{
				file_var_s11_1 = btlAtelDecideEntryGroupByPreviousMap();
				if (file_var_s11_1 >= 0)
				{
					btlAtelSetKeepWorkGroup(file_var_s11_1, -1);
					setentrygroup(file_var_s11_1);
					requestreentry();
					return;
				}
			}
			while (true)
			{
				if ((btlAtelGetDeadCountNow(0) < btlAtelGetDeadCountMax(0) || btlAtelGetDeadCountMax(0) == 0))
				{
					if ((btlAtelGetElapseTime(0) > btlAtelGetRespawnTime(0) || btlAtelGetDeadCountNow(0) == 0))
					{
						btlAtelSetKeepWorkGroup(0, -1);
						setentrygroup(0);
						requestreentry();
						return;
					}
				}
				wait(1);
			}
		}

		fn_respawn respawn00()
		{
			btlAtelRespawnTagStart();
			if (btlAtelGetRespawnCause() == 0)
			{
				btlAtelSetBattleLogicFlag(15, 0);
			}
			while (true)
			{
				wait(1);
			}
		}
	}

	function init()
	{
		btlAtelInitTagStart();
		btlAtelSetTotalEntryNumber(0x03000042);
		btlAtelSetPoint2(0x03000030);
		btlAtelInitTagFinish();
		return;
	}
}

//======================================================================
//                          Map exit arrays                           //
//======================================================================

mapExitArray mapExitGroup0[1] = {

	exitStruct mapExit0 = {
		126, -0, 155.302551, 1, 
		133.999954, 0, 155.302551, 9, 20, 0
	};

};

mapExitArray mapExitGroup1[1] = {

	exitStruct mapExit0 = {
		97.25, 4, 126.914574, 1, 
		97.25, 4, 131.248367, 13, 1, 0
	};

};

mapExitArray mapExitGroup2[0] = {

};

mapExitArray mapExitGroup3[0] = {

};

mapExitArray mapExitGroup4[0] = {

};

//======================================================================
//                     Map jump position vectors                      //
//======================================================================

mjPosArr1 mapJumpPositions1[3] = {

	mjPos mapJumpPos0 = {
		135.144699, -0, 138.395599, 0,
		0, 0, 0, 0
	};

	mjPos mapJumpPos1 = {
		101.19529, -0, 128.859283, 1.59237623,
		0, 0, 0, 0
	};

	mjPos mapJumpPos2 = {
		129.967804, -0, 151.174515, -3.14075971,
		0, 0, 0, 0
	};

};

mjPosArr2 mapJumpPositions2[5] = {

	mjPos mapJumpPos0 = {
		135.144699, -0, 138.395599, 0,
		0, 0, 0, 0
	};

	mjPos mapJumpPos1 = {
		61.7528458, -0, 128.886627, -1.57467675,
		0, 0, 0, 0
	};

	mjPos mapJumpPos2 = {
		101.19529, -0, 128.859283, 1.59237623,
		0, 0, 0, 0
	};

	mjPos mapJumpPos3 = {
		130.315247, -0, 163.372208, 0,
		0, 0, 0, 0
	};

	mjPos mapJumpPos4 = {
		129.967804, -0, 151.174515, -3.14075971,
		0, 0, 0, 0
	};

};

//======================================================================
//                      Unknown position arrays                       //
//======================================================================
unkPos1 unknownPosition0[7] = {130.011414, -0, 155.319717, 4.00177383, 3, 0, 0};
unkPos1 unknownPosition1[7] = {130.015228, -0, 154.806152, 2, 1, 0, 0};

unkPos2 unknownPosition0[7] = {130.053864, 1.29999995, 155.333237, 1.5, 1.5, 0, 0};
