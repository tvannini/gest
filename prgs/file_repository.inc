<?php
o2def::tab("o2_users", "default", "o2sys_users", "o2user");

	o2def::field("o2user", "o2user", "_o2alpha");
	o2def::field("o2password", "o2password", "_o2sid");
	o2def::field("area", "asp_area", "_o2alpha");
	o2def::field("expire_date", "expire_date", "_o2date");
	o2def::field("last_date", "last_date", "_o2date");
	o2def::field("last_time", "last_time", "_o2time");
	o2def::field("login_type", "login_type", "o2sys_login_type");
	o2def::field("last_pwd_date", "last_pwd_date", "_o2date");
	o2def::field("force_pwd_change", "force_pwd_change", "_o2logical");
	o2def::field("pwds_history", "pwds_history", "o2sys_long_str");
	o2def::field("no_pwd_change", "no_pwd_change", "_o2logical");
	o2def::field("creation_date", "creation_date", "_o2date");
	o2def::field("admin", "admin", "_o2logical");
	o2def::field("poweruser", "poweruser", "_o2logical");	o2def::field("hidden", "hidden", "_o2logical");

	o2def::index("o2user", "o2user","A");
	o2def::index("asp_area", "area","A", "o2user","A");


o2def::tab("o2_sessions", "default", "o2sys_sessions", "sid");

	o2def::field("sid", "sid", "_o2sid");
	o2def::field("o2user", "o2user", "_o2alpha");
	o2def::field("c_date", "c_date", "_o2date");
	o2def::field("c_time", "c_time", "_o2time");
	o2def::field("a_date", "a_date", "_o2date");
	o2def::field("a_time", "a_time", "_o2time");
	o2def::field("e_date", "e_date", "_o2date");
	o2def::field("e_time", "e_time", "_o2time");
	o2def::field("terminal_id", "terminal_id", "jxterminal_id");
	o2def::field("app_name", "app_name", "_o2alpha");
	o2def::field("run_mode", "run_mode", "o2sys_app_run_mode");
	o2def::field("host", "host", "jxhost");

	o2def::index("sid", "sid","A");
	o2def::index("expire", "e_date","A", "e_time","A", "sid","A");
	o2def::index("creation", "c_date","A", "c_time","A", "sid","A");
	o2def::index("lastupdate", "a_date","A", "a_time","A", "sid","A");
	o2def::index("upd_desc", "a_date","D", "a_time","D", "sid","A");


o2def::tab("o2_options", "default", "o2sys_options", "id");

	o2def::field("o2user", "o2user", "_o2alpha");
	o2def::field("code", "code", "_o2alpha");
	o2def::field("value", "value", "_o2sid");

	o2def::index("id", "o2user","A", "code","A");


o2def::tab("o2_roles_per_user", "default", "o2sys_roles_per_user", "o2user");

	o2def::field("o2user", "o2user", "_o2alpha");
	o2def::field("role_name", "role_name", "_o2alpha");

	o2def::index("o2user", "o2user","A", "role_name","A");
	o2def::index("role_name", "role_name","A", "o2user","A");


o2def::tab("o2_rights_per_role", "default", "o2sys_rights_per_role", "role_name");

	o2def::field("role_name", "role_name", "_o2alpha");
	o2def::field("right_code", "right_code", "_o2alpha");

	o2def::index("role_name", "role_name","A", "right_code","A");
	o2def::index("right_code", "right_code","A", "role_name","A");


o2def::tab("o2_roles", "default", "o2sys_roles", "role_name");

	o2def::field("role_name", "role_name", "_o2alpha");

	o2def::index("role_name", "role_name","A");


o2def::tab("o2_rights", "default", "o2sys_rights", "right_code");

	o2def::field("right_code", "right_code", "_o2alpha");

	o2def::index("right_code", "right_code","A");


o2def::tab("anagrafica", "gest", "anagrafica", "codice");

	o2def::field("codice", "codice", "cod_anagrafica");
	o2def::field("nominativo", "nominativo", "nominativo");
	o2def::field("indirizzo", "indirizzo", "indirizzo");
	o2def::field("n_civico", "n_civico", "n_civico");
	o2def::field("cap", "cap", "cap");
	o2def::field("localita", "localita", "localita");
	o2def::field("provincia", "provincia", "provincia");
	o2def::field("email", "email", "email");
	o2def::field("pec", "pec", "email");
	o2def::field("p_iva", "p_iva", "partita_iva");
	o2def::field("cod_fiscale", "cod_fiscale", "cod_fiscale");
	o2def::field("cod_destinatario", "cod_destinatario", "cod_destinatario");
	o2def::field("dismesso", "dismesso", "_o2logical");

	o2def::index("codice", "codice","A");
	o2def::index("nominativo", "nominativo","A", "codice","A");


o2def::tab("parametri", "gest", "parametri", "record_unico");

	o2def::field("record_unico", "record_unico", "record_unico");
	o2def::field("azienda", "azienda", "cod_anagrafica");
	o2def::field("fiscalista", "fiscalista", "cod_anagrafica");
	o2def::field("modello_efattura", "modello_efattura", "txt_medio");
	o2def::field("modello_fattura", "modello_fattura", "txt_medio");
	o2def::field("modello_prospetto", "modello_prospetto", "txt_medio");
	o2def::field("archivio_fatture", "archivio_fatture", "txt_medio");
	o2def::field("archivio_spese", "archivio_spese", "txt_medio");

	o2def::index("record_unico", "record_unico","A");


o2def::tab("contratti", "gest", "contratti", "codice");

	o2def::field("codice", "codice", "cod_contratto");
	o2def::field("cliente", "cliente", "cod_anagrafica");
	o2def::field("data", "data", "data_estesa");
	o2def::field("importo_mensile", "importo_mensile", "importo");
	o2def::field("data_fine", "data_fine", "data_estesa");

	o2def::index("codice", "codice","A");
	o2def::index("cliente", "cliente","A", "codice","A");


o2def::tab("fatture", "gest", "fatture", "codice");

	o2def::field("codice", "codice", "cod_fattura");
	o2def::field("num_documento", "num_documento", "num_documento");
	o2def::field("anno", "anno", "anno");
	o2def::field("cliente", "cliente", "cod_anagrafica");
	o2def::field("contratto", "contratto", "cod_contratto");
	o2def::field("prestazione", "prestazione", "txt_medio");
	o2def::field("data", "data", "data_estesa");
	o2def::field("importo", "importo", "importo");
	o2def::field("pagato", "pagato", "data_estesa");

	o2def::index("codice", "codice","A");
	o2def::index("numero", "anno","D", "num_documento","D", "codice","A");
	o2def::index("cliente", "cliente","A", "data","D", "codice","A");
	o2def::index("data", "data","D", "codice","D");
	o2def::index("pagato", "pagato","A", "num_documento","A", "codice","A");
	o2def::index("ordinamento", "data","A", "codice","A");


o2def::tab("spese", "gest", "spese", "codice");

	o2def::field("codice", "codice", "cod_spesa");
	o2def::field("data", "data", "data_estesa");
	o2def::field("riferimento", "riferimento", "rif_spesa");
	o2def::field("fornitore", "fornitore", "cod_anagrafica");
	o2def::field("importo", "importo", "importo");
	o2def::field("descrizione", "descrizione", "txt_medio");
	o2def::field("documento", "documento", "txt_medio");
	o2def::field("pagato", "pagato", "data_estesa");

	o2def::index("codice", "codice","A");
	o2def::index("data", "data","D", "codice","D");
	o2def::index("fornitore", "fornitore","A", "data","D", "codice","D");
	o2def::index("ordinamento", "data","A", "codice","A");


?>
