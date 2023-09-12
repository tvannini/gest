<?php
//2.9
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("parametri", "start", "", __FILE__);

o2def::view('prg§_§var');
o2def::view("parametri", false, "", "", 1, 0);
o2def::view("anagrafiche_combo", false, "", "", 1, 0);
o2def::act("chiudi");
o2def::act("crea_record_unico");
o2def::act("parametri_post");
o2def::act("parametri_undo");
o2def::act("seleziona_archivio_fatture");
o2def::act("seleziona_archivio_spese");
o2def::act("seleziona_modello_efattura");
o2def::act("seleziona_modello_fattura");
o2def::act("seleziona_modello_lista");
o2def::act("start");
o2def::form("parametri", "", False, "true", false);

?>
