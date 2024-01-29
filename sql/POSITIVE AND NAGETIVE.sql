set serveroutput on;
declare 
    num integer := &num;
BEGIN 
    if num < 0 then
        DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is negetive.' );
    elsif num > 0 then 
        DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is positive.' );
        else 
            DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is ZERO.');
    end if;

end;
/