import json

files = [
    "./tri_a/area/tri_a.ard.dir/section_007.json",
    "./tri_b/area/tri_b.ard.dir/section_007.json",
    "./tri_c/area/tri_c.ard.dir/section_007.json",
    "./tri_d/area/tri_d.ard.dir/section_007.json",
    "./tri_e/area/tri_e.ard.dir/section_007.json",
    "./tri_f/area/tri_f.ard.dir/section_007.json",
    "./tri_g/area/tri_g.ard.dir/section_007.json",
    "./tri_h/area/tri_h.ard.dir/section_007.json",
    "./tri_i/area/tri_i.ard.dir/section_007.json",
    "./tri_j/area/tri_j.ard.dir/section_007.json",
    "./tri_k/area/tri_k.ard.dir/section_007.json",
    "./tri_l/area/tri_l.ard.dir/section_007.json",
    "./tri_m/area/tri_m.ard.dir/section_007.json",
    "./tri_n/area/tri_n.ard.dir/section_007.json",
    "./tri_o/area/tri_o.ard.dir/section_007.json",
    "./tri_p/area/tri_p.ard.dir/section_007.json",
    "./tri_q/area/tri_q.ard.dir/section_007.json",
    "./tri_r/area/tri_r.ard.dir/section_007.json",
    "./tri_s/area/tri_s.ard.dir/section_007.json",
    "./tri_t/area/tri_t.ard.dir/section_007.json"]


for file in files:
    f = open(file, 'r+')
    data = json.load(f)
    for key in data["Stats"].keys():
        data["Stats"][key]["Experience"] = int(data["Stats"][key]["Max HP"]*1.5)
    f.seek(0)
    json.dump(data, f, indent = 2)
    f.truncate()