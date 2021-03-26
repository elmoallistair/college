SET VERIFY OFF
VARIABLE g_total NUMBER
ACCEPT p_salary PROMP 'MASUKKAN JUMLAH GAJI		: '
ACCEPT p_bonus PROMP 'MASUKKAN JUMLAH PERSENTASE BONUS	: '

DECLARE
	v_salary NUMBER	:= &p_salary;
	v_bonus NUMBER := &p_bonus;

BEGIN
	:g_total := NVL(v_salary, 0) * (1 + NVL(v_bonus, 0) / 100);
END;
/

PRINT g_total
SET VERIFY ON