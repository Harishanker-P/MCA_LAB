-- create or replace procedure ad
-- (a number,b number)
-- is
--  res number;
-- begin
--     res:=a+b;

--     dbms_output.put_line(a||' + '||b||'='||res);
-- end;
-- /
create or replace procedure test1 (i in out number) is
begin
    i:=i+1;
end;
/