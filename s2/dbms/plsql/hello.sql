set serveroutput on;
CREATE or REPLACE function hy(){
return number is a number;
declare
	msg varchar(20):='hello world';
	a:=1
begin 
	dbms_output.put_line(msg);
	return a
end hy;

declare 
	b number;
begin
	b:=hy()
end;
/
