<?php
//2.8
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("produci_efattura", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("fatture", false, "", "", 1, 0);
o2def::view("cliente", false, "", "", 1, 0);
o2def::view("azienda", false, "", "", 1, 0);
o2def::view("parametri", false, "", "", 1, 0);
o2def::act("start");
o2def::par(1, "codice", "cod_fattura");
?>
