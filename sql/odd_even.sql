set serveroutput on;
declare 
    num integer := &num;
BEGIN 
    if num = 0 then
        DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is ZERO.');
    elsif mod(num , 2) = 0 then
        DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is EVEN.' );
    else 
        DBMS_OUTPUT.PUT_LINE('your number ' || num || ' is ODD.');
    end if;

end;
/