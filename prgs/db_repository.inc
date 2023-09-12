<?php
// ==============  SERVERS ================
o2def::server("gest", "sqlite3", "gest.db", "", "", 0);
o2def::server("default", "sqlite3", "sys.db", "", "", 0);
// ==============  DATABASES ================
o2def::db("gest", "gest", "", "", false, true);
o2def::db("default", "default", "", "", false, true);
?>
