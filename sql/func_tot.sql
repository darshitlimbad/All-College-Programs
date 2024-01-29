create or replace Function tot return number is
tot number;
begin
    select count(*) into tot from emp;
    return tot;
end;
/

declare
 a number;
begin
    a:=tot();
    dbms_output.put_line(a);
end ;
/



