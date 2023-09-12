<?php
//2.1
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("presentazioni", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("fatture", False, "", "");
o2def::view("spese", False, "", "");
o2def::view("parametri", False, "", "");
o2def::act("aggiungi_fattura", "");
o2def::act("aggiungi_spesa", "");
o2def::act("esegui", "");
o2def::act("fatture", "");
o2def::act("imposta_data_fine", "");
o2def::act("spese", "");
o2def::act("start", "");
o2def::form("presentazioni", "", False, "true", false);

?>
