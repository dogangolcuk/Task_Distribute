#!/usr/bin/ksh
set -x
######################################################################
#   Kutya kurulumu						     #
#   1.Bu dosyanın bulunduğu yerde F4 e basarak komut satırını açın   #
#   2."su" komutu ile root kullanıcısı olarak giriş yapın.           #
#   3."sh kur.sh" komutu ile kurulumu tamamlayın.                    # 
#   DİKKAT 							     #
#   Eğer daha önceden kullandığınız "personel" veritabanı varsa     #
#   kurulumu sadece pisi dosyasına çift tıklayarak yapabilirsiniz.   #
######################################################################
#su -c "pisi it ./personel-0.3.8-4.pisi"

su -c "service postgresql-server start"

su -c "service postgresql-server on"

su -c "createuser -h localhost --createdb --no-createrole --no-superuser personel" postgres

su -c "createdb -h localhost --owner personel personel" postgres

su -c "pg_restore --dbname=personel --host=localhost --port=5432 -U personel --verbose ./personel.backup"
