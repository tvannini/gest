<?php
//2.8
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("fatture", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("fatture", false, "", "", 0, 0);
o2def::view("anagrafica", false, "", "", 1, 0);
o2def::view("contratti", false, "", "", 1, 0);
o2def::view("ultimo_codice", false, "", "", 1, 0);
o2def::view("ultimo_progressivo", false, "", "", 1, 0);
o2def::view("parametri", false, "", "", 1, 0);
o2def::act("change_contratto");
o2def::act("download_efatt");
o2def::act("fatture_delete");
o2def::act("fatture_detail");
o2def::act("fatture_detail_off");
o2def::act("fatture_insert");
o2def::act("fatture_post");
o2def::act("fatture_select");
o2def::act("fatture_undo");
o2def::act("stampa");
o2def::act("stampa_copia");
o2def::act("start");
o2def::form("fatture_detail", "", False, "fatture_exp_9()", false);
o2def::form("fatture_list", "", False, "fatture_exp_8()", false);
o2def::par(1, "codice", "cod_fattura");


?>
