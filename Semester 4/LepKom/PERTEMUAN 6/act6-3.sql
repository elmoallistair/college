SET VERIFY OFF
VARIABLE v_hasil NUMBER
ACCEPT p_angka1 PROMPT 'MASUKKAN ANGKA PERTAMA  : ';
ACCEPT p_angka2 PROMPT 'MASUKKAN ANGKA KEDUA    : ';
ACCEPT p_angka3 PROMPT 'MASUKKAN ANGKA KETIGA   : ';
ACCEPT p_angka4 PROMPT 'MASUKKAN ANGKA KEEMPAT  : ';

DECLARE
    v_angka1    NUMBER := &p_angka1;
    v_angka2    NUMBER := &p_angka2;
    v_angka3    NUMBER := &p_angka3;
    v_angka4    NUMBER := &p_angka4;

BEGIN
    :v_hasil := (v_angka1 + v_angka2) / (v_angka3 + v_angka4);
END;
/

PRINT v_hasil
SET VERIFY ON