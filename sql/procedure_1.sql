 CREATE OR REPLACE PROCEDURE welcome(msg VARCHAR2) IS
 BEGIN
   dbms_output.put_line('Hello ' || msg);
 END;
 /

declare
begin
welcome('world');
end;
/