<?php
//2.9
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("spese", "", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("spese", false, "", "", 1, 0);
o2def::view("fornitori", false, "", "", 1, 0);
o2def::view("nuovo_codice_spesa", false, "", "", 1, 0);
o2def::view("parametri", false, "", "", 1, 0);
o2def::act("cambio_data");
o2def::act("close_detail");
o2def::act("spese_delete");
o2def::act("spese_detail");
o2def::act("spese_insert");
o2def::act("spese_post");
o2def::act("spese_select");
o2def::act("spese_undo");
o2def::act("upload");
o2def::form("spese_detail", "", False, "spese_exp_10()", false);
o2def::form("spese_list", "", False, "spese_exp_3()", false);


?>
