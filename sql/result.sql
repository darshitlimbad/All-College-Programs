set serveroutput on;
declare 
    pr integer := &pr;
    grade varchar2(2);
BEGIN 
    case 
        when pr >= 90  then
            grade := 'A';
        when pr >= 70  AND pr < 90 then
            grade := 'B';
        when pr >= 50 AND pr < 70 then
            grade := 'C';
        when pr >= 30 AND pr < 50 then
            grade := 'D';
        when pr <= 29 then
            grade := 'E';
    end case;

    DBMS_OUTPUT.PUT_LINE('Your grade is ' || grade);
    if grade = 'D' or grade = 'E' then
        DBMS_OUTPUT.PUT_LINE('need Improvement');
    end if;
end;
/