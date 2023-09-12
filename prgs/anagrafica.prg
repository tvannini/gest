<?php
//2.6
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("anagrafica", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("anagrafica", False, "", "", 1);
o2def::view("nuovo_codice", False, "", "", 1);
o2def::act("anagrafica_delete");
o2def::act("anagrafica_detail");
o2def::act("anagrafica_detail_off");
o2def::act("anagrafica_insert");
o2def::act("anagrafica_post");
o2def::act("anagrafica_select");
o2def::act("anagrafica_undo");
o2def::act("start");
o2def::form("anagrafica_detail", "", False, "anagrafica_exp_7()", false);
o2def::form("anagrafica_list", "", False, "anagrafica_exp_6()", false);
o2def::par(1, "codice", "cod_anagrafica");


?>
