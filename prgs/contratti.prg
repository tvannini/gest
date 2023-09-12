<?php
//2.8
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("contratti", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("contratti", false, "", "", 1, 0);
o2def::view("anagrafiche", false, "", "", 1, 0);
o2def::view("ultimo_codice", false, "", "", 1, 0);
o2def::act("contratti_delete");
o2def::act("contratti_detail");
o2def::act("contratti_detail_off");
o2def::act("contratti_insert");
o2def::act("contratti_post");
o2def::act("contratti_select");
o2def::act("contratti_undo");
o2def::act("start");
o2def::form("contratti_detail", "", False, "contratti_exp_8()", false);
o2def::form("contratti_list", "", False, "contratti_exp_7()", false);
o2def::par(1, "codice", "cod_contratto");


?>
