ACCEPT p_angka1 PROMPT 'MASUKKAN ANGKA PERTAMA  : ';
ACCEPT p_angka2 PROMPT 'MASUKKAN ANGKA KEDUA    : ';
ACCEPT p_angka3 PROMPT 'MASUKKAN ANGKA KETIGA   : ';
ACCEPT p_angka4 PROMPT 'MASUKKAN ANGKA KEEMPAT  : ';

DECLARE
    v_angka1    NUMBER(9,2) := &p_angka1;
    v_angka2    NUMBER(9,2) := &p_angka2;
    v_angka3    NUMBER(9,2) := &p_angka3;
    v_angka4    NUMBER(9,2) := &p_angka4;
    v_hasil     NUMBER(9,2);
BEGIN
    v_hasil := (v_angka1 + v_angka2) / (v_angka3 + v_angka4);
    DBMS_OUTPUT.PUT_LINE(v_hasil);
END;
/