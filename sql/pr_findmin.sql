create or replace procedure findmin(x in number, y in number, z out number) is
begin
    if x<y then 
        z:=x;
    elsif y<x then
        z:=y;
    end if;

end;
/

declare
 a number :=23;
 b number :=45;
 c number;
begin
    findmin(a,b,c);
    dbms_output.put_line(c);
end ;
/

