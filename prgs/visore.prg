<?php
//2.6
//o2def::module("");
//o2def::folder("");
/*
o2def::prgnotes("");
*/

o2def::prg("visore", "", "", __FILE__);

o2def::view("parametri", False, "", "", 1);
o2def::act("consolida");
o2def::act("resize");
o2def::form("visore", "", False, "true", false);
o2def::par(1, "file", "txt_medio");
o2def::par(2, "copia", "_o2logical");
o2def::par(3, "effettivo", "txt_medio");
o2def::par(4, "efatt", "txt_medio");

?>
