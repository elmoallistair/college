VARIABLE v_char VARCHAR2(25);
VARIABLE v_num VARCHAR2(2);

BEGIN
    :v_char := '42 adalah jawabannya';
    :v_num := SUBSTR(:v_char, 0, 2);
END;
/

PRINT v_char
PRINT v_num