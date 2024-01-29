create or replace Function factorial(x number) return number is
tot number;
begin
    if x=0 then
        tot :=1;
    else 
        tot := x*factorial(x-1);
    end if;
    return tot;
end;
/

declare
 a number :=&a;
begin
    a:=factorial(a);
    dbms_output.put_line(a);
end ;
/



