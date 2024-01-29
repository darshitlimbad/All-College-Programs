
--Simple LOOP 
set serveroutput on;
DECLARE 
    a number := 1;
BEGIN
    LOOP
        dbms_output.put_line(a);
        a := a+1;
        if (a > 5) then
            exit;
        end if;
    end LOOP;
end;
/


set serveroutput on;
DECLARE 
--Simple loop EVEN
    num number :=1;
    end_num number := &end_num;
BEGIN
    LOOP 
        if (mod(num , 2) = 0) then
            dbms_output.put_line('num = ' || num || ' is even');
        end if;
        
        num := num+1;
        
        if (num > end_num) then
            exit;
        end if;
    end LOOP;
END;
/


set serveroutput on;
DECLARE 
--Simple loop ODD
    num number :=1;
    end_num number := &end_num;
BEGIN
    LOOP 
        if (mod(num , 2) != 0) then
            dbms_output.put_line('num = ' || num || ' is ODD');
        end if;
        
        num := num+1;
        
        if (num > end_num) then
            exit;
        end if;
    end LOOP;
END;
/