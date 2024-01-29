create or replace trigger emp_trigg
before insert or update or delete on emp
for each row
when (new.empno > 0)
declare
    diff emp.sal%type;
begin
    if inserting or updating then
        diff := :new.sal - :old.sal;

        dbms_output.put_line('old salary: ' || :old.sal);
        dbms_output.put_line('new salary: ' || :new.sal);
        dbms_output.put_line('salary difference: ' || diff);
    end if;
    if deleting then
        dbms_output.put_line('Deleted employee with empno: ' || :old.empno);
    end if;
end emp_trigg;
/
