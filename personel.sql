--
-- PostgreSQL database dump
--

-- Started on 2007-11-11 21:40:21 EET

SET client_encoding = 'UTF8';
SET check_function_bodies = false;
SET client_min_messages = warning;

--
-- TOC entry 1612 (class 0 OID 0)
-- Dependencies: 5
-- Name: SCHEMA public; Type: COMMENT; Schema: -; Owner: postgres
--

COMMENT ON SCHEMA public IS 'Standard public schema';


SET search_path = public, pg_catalog;

--
-- TOC entry 11 (class 1255 OID 42591)
-- Dependencies: 5
-- Name: ikizrole(integer, integer, integer); Type: FUNCTION; Schema: public; Owner: postgres
--

CREATE FUNCTION ikizrole(rolegorev_id integer, roleno_id integer, role_id integer) RETURNS bigint
    AS $_$SELECT count(*)  FROM  roleno_roleler_rolegorevleri 
WHERE  roleler_id=$3 and rolegorevleri_id=$1 and roleno=$2$_$
    LANGUAGE sql;


ALTER FUNCTION public.ikizrole(rolegorev_id integer, roleno_id integer, role_id integer) OWNER TO postgres;

SET default_tablespace = '';

SET default_with_oids = false;

--
-- TOC entry 1233 (class 1259 OID 59486)
-- Dependencies: 5
-- Name: adresbilgileri; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE adresbilgileri (
    id serial NOT NULL,
    personel_id integer,
    daimiadres text,
    geciciadres text
);


ALTER TABLE public.adresbilgileri OWNER TO postgres;

--
-- TOC entry 1227 (class 1259 OID 51055)
-- Dependencies: 5
-- Name: cocuk; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE cocuk (
    id serial NOT NULL,
    personel_id integer,
    ad character varying(150),
    soyad character varying(150),
    tckimlik character(11),
    dogumtarihi date,
    cinsiyeti character varying(20),
    ogrenimdurumu character varying(300)
);


ALTER TABLE public.cocuk OWNER TO postgres;

--
-- TOC entry 1230 (class 1259 OID 51253)
-- Dependencies: 5
-- Name: digerbilgiler; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE digerbilgiler (
    id serial NOT NULL
);


ALTER TABLE public.digerbilgiler OWNER TO postgres;

--
-- TOC entry 1223 (class 1259 OID 42605)
-- Dependencies: 5
-- Name: gorevler; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE gorevler (
    id serial NOT NULL,
    gorevyeri text
);


ALTER TABLE public.gorevler OWNER TO postgres;

--
-- TOC entry 1225 (class 1259 OID 42861)
-- Dependencies: 5
-- Name: kurslar; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE kurslar (
    id serial NOT NULL,
    kursadi text
);


ALTER TABLE public.kurslar OWNER TO postgres;

--
-- TOC entry 1211 (class 1259 OID 34253)
-- Dependencies: 1558 5
-- Name: personel; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE personel (
    id serial NOT NULL,
    sicilno character varying(20) NOT NULL,
    ad character varying(100) NOT NULL,
    soyad character varying(100),
    sinif character varying(20),
    rutbe character varying(100),
    roleno integer DEFAULT 0 NOT NULL
);


ALTER TABLE public.personel OWNER TO postgres;

--
-- TOC entry 1229 (class 1259 OID 51111)
-- Dependencies: 5
-- Name: personel_gorevler; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE personel_gorevler (
    id serial NOT NULL,
    personel_id integer NOT NULL,
    gorevler_id integer NOT NULL,
    atanmatarihi date NOT NULL,
    katilmatarihi date,
    ayrilmatarihi date
);


ALTER TABLE public.personel_gorevler OWNER TO postgres;

--
-- TOC entry 1219 (class 1259 OID 34332)
-- Dependencies: 5
-- Name: roleno; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE roleno (
    id serial NOT NULL,
    rno character varying(20) NOT NULL
);


ALTER TABLE public.roleno OWNER TO postgres;

--
-- TOC entry 1220 (class 1259 OID 34369)
-- Dependencies: 1299 5
-- Name: personel_roleno; Type: VIEW; Schema: public; Owner: postgres
--

CREATE VIEW personel_roleno AS
    SELECT r.id, r.rno, p.ad, p.soyad FROM personel p, roleno r WHERE (p.roleno = r.id);


ALTER TABLE public.personel_roleno OWNER TO postgres;

--
-- TOC entry 1213 (class 1259 OID 34258)
-- Dependencies: 5
-- Name: rolegorevleri; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE rolegorevleri (
    id serial NOT NULL,
    ad character varying(100),
    komuta character varying(100),
    yeri text,
    neyapar text
);


ALTER TABLE public.rolegorevleri OWNER TO postgres;

--
-- TOC entry 1215 (class 1259 OID 34266)
-- Dependencies: 5
-- Name: roleler; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE roleler (
    id serial NOT NULL,
    ad character varying(100) NOT NULL,
    tipi character varying(50)
);


ALTER TABLE public.roleler OWNER TO postgres;

--
-- TOC entry 1216 (class 1259 OID 34269)
-- Dependencies: 5
-- Name: roleler_rolegorevleri; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE roleler_rolegorevleri (
    roleler_id integer NOT NULL,
    rolegorevleri_id integer NOT NULL
);


ALTER TABLE public.roleler_rolegorevleri OWNER TO postgres;

--
-- TOC entry 1217 (class 1259 OID 34276)
-- Dependencies: 5
-- Name: roleno_roleler_rolegorevleri; Type: TABLE; Schema: public; Owner: postgres; Tablespace: 
--

CREATE TABLE roleno_roleler_rolegorevleri (
    roleler_id integer NOT NULL,
    rolegorevleri_id integer NOT NULL,
    roleno integer NOT NULL
);


ALTER TABLE public.roleno_roleler_rolegorevleri OWNER TO postgres;

--
-- TOC entry 1221 (class 1259 OID 34375)
-- Dependencies: 1300 5
-- Name: roleno_gorevleri; Type: VIEW; Schema: public; Owner: postgres
--

CREATE VIEW roleno_gorevleri AS
    SELECT rn.rno, p.ad AS pad, p.soyad, rl.ad AS rolead, rlg.ad FROM roleno_roleler_rolegorevleri rrr, personel p, roleno rn, roleler rl, rolegorevleri rlg WHERE ((((rrr.roleno = p.roleno) AND (rrr.roleler_id = rl.id)) AND (rrr.rolegorevleri_id = rlg.id)) AND (p.roleno = rn.id));


ALTER TABLE public.roleno_gorevleri OWNER TO postgres;

--
-- TOC entry 1599 (class 2606 OID 59493)
-- Dependencies: 1233 1233
-- Name: adresbilgileri_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY adresbilgileri
    ADD CONSTRAINT adresbilgileri_pkey PRIMARY KEY (id);


--
-- TOC entry 1591 (class 2606 OID 51064)
-- Dependencies: 1227 1227
-- Name: cocuk_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY cocuk
    ADD CONSTRAINT cocuk_pkey PRIMARY KEY (id);


--
-- TOC entry 1597 (class 2606 OID 51262)
-- Dependencies: 1230 1230
-- Name: digerbilgiler_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY digerbilgiler
    ADD CONSTRAINT digerbilgiler_pkey PRIMARY KEY (id);


--
-- TOC entry 1587 (class 2606 OID 42612)
-- Dependencies: 1223 1223
-- Name: gorevler_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY gorevler
    ADD CONSTRAINT gorevler_pkey PRIMARY KEY (id);


--
-- TOC entry 1589 (class 2606 OID 42868)
-- Dependencies: 1225 1225
-- Name: kurslar_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY kurslar
    ADD CONSTRAINT kurslar_pkey PRIMARY KEY (id);


--
-- TOC entry 1593 (class 2606 OID 51117)
-- Dependencies: 1229 1229 1229 1229
-- Name: personel_gorevler_personel_id_key; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY personel_gorevler
    ADD CONSTRAINT personel_gorevler_personel_id_key UNIQUE (personel_id, gorevler_id, atanmatarihi);


--
-- TOC entry 1595 (class 2606 OID 51115)
-- Dependencies: 1229 1229
-- Name: personel_gorevler_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY personel_gorevler
    ADD CONSTRAINT personel_gorevler_pkey PRIMARY KEY (id);


--
-- TOC entry 1569 (class 2606 OID 42648)
-- Dependencies: 1211 1211
-- Name: personel_id_key; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY personel
    ADD CONSTRAINT personel_id_key UNIQUE (id);


--
-- TOC entry 1571 (class 2606 OID 42636)
-- Dependencies: 1211 1211
-- Name: pk_sicilno; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY personel
    ADD CONSTRAINT pk_sicilno PRIMARY KEY (sicilno);


--
-- TOC entry 1573 (class 2606 OID 34283)
-- Dependencies: 1213 1213
-- Name: rolegorevleri_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY rolegorevleri
    ADD CONSTRAINT rolegorevleri_pkey PRIMARY KEY (id);


--
-- TOC entry 1575 (class 2606 OID 34285)
-- Dependencies: 1215 1215
-- Name: roleler_ad_key; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleler
    ADD CONSTRAINT roleler_ad_key UNIQUE (ad);


--
-- TOC entry 1577 (class 2606 OID 34287)
-- Dependencies: 1215 1215
-- Name: roleler_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleler
    ADD CONSTRAINT roleler_pkey PRIMARY KEY (id);


--
-- TOC entry 1579 (class 2606 OID 34289)
-- Dependencies: 1216 1216 1216
-- Name: roleler_rolegorevleri_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleler_rolegorevleri
    ADD CONSTRAINT roleler_rolegorevleri_pkey PRIMARY KEY (roleler_id, rolegorevleri_id);


--
-- TOC entry 1583 (class 2606 OID 34336)
-- Dependencies: 1219 1219
-- Name: roleno_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleno
    ADD CONSTRAINT roleno_pkey PRIMARY KEY (id);


--
-- TOC entry 1585 (class 2606 OID 34338)
-- Dependencies: 1219 1219
-- Name: roleno_rno_key; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleno
    ADD CONSTRAINT roleno_rno_key UNIQUE (rno);


--
-- TOC entry 1581 (class 2606 OID 34405)
-- Dependencies: 1217 1217 1217 1217
-- Name: roleno_roleler_rolegorevleri_pkey; Type: CONSTRAINT; Schema: public; Owner: postgres; Tablespace: 
--

ALTER TABLE ONLY roleno_roleler_rolegorevleri
    ADD CONSTRAINT roleno_roleler_rolegorevleri_pkey PRIMARY KEY (roleno, roleler_id, rolegorevleri_id);


--
-- TOC entry 1609 (class 2606 OID 59494)
-- Dependencies: 1233 1211 1568
-- Name: adresbilgileri_personel_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY adresbilgileri
    ADD CONSTRAINT adresbilgileri_personel_id_fkey FOREIGN KEY (personel_id) REFERENCES personel(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1606 (class 2606 OID 51065)
-- Dependencies: 1227 1211 1568
-- Name: cocuk_personel_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY cocuk
    ADD CONSTRAINT cocuk_personel_id_fkey FOREIGN KEY (personel_id) REFERENCES personel(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1607 (class 2606 OID 51118)
-- Dependencies: 1229 1223 1586
-- Name: personel_gorevler_gorevler_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY personel_gorevler
    ADD CONSTRAINT personel_gorevler_gorevler_id_fkey FOREIGN KEY (gorevler_id) REFERENCES gorevler(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1608 (class 2606 OID 51123)
-- Dependencies: 1229 1211 1568
-- Name: personel_gorevler_personel_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY personel_gorevler
    ADD CONSTRAINT personel_gorevler_personel_id_fkey FOREIGN KEY (personel_id) REFERENCES personel(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1600 (class 2606 OID 42642)
-- Dependencies: 1211 1219 1582
-- Name: personel_roleno_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY personel
    ADD CONSTRAINT personel_roleno_fkey FOREIGN KEY (roleno) REFERENCES roleno(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1601 (class 2606 OID 34292)
-- Dependencies: 1216 1213 1572
-- Name: roleler_rolegorevleri_rolegorevleri_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY roleler_rolegorevleri
    ADD CONSTRAINT roleler_rolegorevleri_rolegorevleri_id_fkey FOREIGN KEY (rolegorevleri_id) REFERENCES rolegorevleri(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1602 (class 2606 OID 34297)
-- Dependencies: 1216 1215 1576
-- Name: roleler_rolegorevleri_roleler_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY roleler_rolegorevleri
    ADD CONSTRAINT roleler_rolegorevleri_roleler_id_fkey FOREIGN KEY (roleler_id) REFERENCES roleler(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1603 (class 2606 OID 34406)
-- Dependencies: 1217 1213 1572
-- Name: roleno_roleler_rolegorevleri_rolegorevleri_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY roleno_roleler_rolegorevleri
    ADD CONSTRAINT roleno_roleler_rolegorevleri_rolegorevleri_id_fkey FOREIGN KEY (rolegorevleri_id) REFERENCES rolegorevleri(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1604 (class 2606 OID 34411)
-- Dependencies: 1217 1215 1576
-- Name: roleno_roleler_rolegorevleri_roleler_id_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY roleno_roleler_rolegorevleri
    ADD CONSTRAINT roleno_roleler_rolegorevleri_roleler_id_fkey FOREIGN KEY (roleler_id) REFERENCES roleler(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1605 (class 2606 OID 34416)
-- Dependencies: 1217 1219 1582
-- Name: roleno_roleler_rolegorevleri_roleno_fkey; Type: FK CONSTRAINT; Schema: public; Owner: postgres
--

ALTER TABLE ONLY roleno_roleler_rolegorevleri
    ADD CONSTRAINT roleno_roleler_rolegorevleri_roleno_fkey FOREIGN KEY (roleno) REFERENCES roleno(id) ON UPDATE CASCADE ON DELETE CASCADE;


--
-- TOC entry 1613 (class 0 OID 0)
-- Dependencies: 5
-- Name: public; Type: ACL; Schema: -; Owner: postgres
--

REVOKE ALL ON SCHEMA public FROM PUBLIC;
REVOKE ALL ON SCHEMA public FROM postgres;
GRANT ALL ON SCHEMA public TO postgres;
GRANT ALL ON SCHEMA public TO PUBLIC;


-- Completed on 2007-11-11 21:40:22 EET

--
-- PostgreSQL database dump complete
--

