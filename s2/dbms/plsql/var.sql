declare
    var1 varchar2(20);
    num1 number(10);
begin
    var1:='i am a varibale';
    num1:=10;
    dbms_output.put_line('var1='||var1);
    dbms_output.put_line('num1='||num1);
end;
/


