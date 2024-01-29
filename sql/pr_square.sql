create or replace procedure square(x in out number) is
begin
    x := x*x ;
end;
/

declare
 a number :=&a;
begin
    square(a);
    dbms_output.put_line(a);
end ;
/



