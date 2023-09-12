<?php
//2.8
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("scadenze", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("spese", false, "", "", 0, 0);
o2def::view("fornitori", false, "", "", 0, 0);
o2def::view("contratti", false, "", "", 0, 0);
o2def::view("incassi", false, "", "", 0, 0);
o2def::act("aggiungi_contratto");
o2def::act("aggiungi_fornitore");
o2def::act("aggiungi_incasso");
o2def::act("analizza_contratto");
o2def::act("analizza_fatture");
o2def::act("analizza_incassi");
o2def::act("analizza_incasso");
o2def::act("analizza_spesa");
o2def::act("analizza_spese");
o2def::act("start");
o2def::form("scadenze_1", "", False, "true", false);

?>
