DECLARE
    v_customer      VARCHAR2(50) := 'Womansport';
    v_credit_rating VARCHAR2(50) := 'EXCELLENT';

BEGIN  
    DECLARE
            v_customer  NUMBER(7) := 201;
            v_name      VARCHAR2(25) := 'Unisports';
    BEGIN
            DBMS_OUTPUT.PUT_LINE(v_customer);
             DBMS_OUTPUT.PUT_LINE(v_name); 
            DBMS_OUTPUT.PUT_LINE(v_credit_rating);
    END;
        DBMS_OUTPUT.PUT_LINE(v_customer);
        /* DBMS_OUTPUT.PUT_LINE(v_name); [ERROR LINE] */
        DBMS_OUTPUT.PUT_LINE(v_credit_rating);        
END;
/