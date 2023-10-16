<html>

	<head>
	</head>
	<body>
		<center>
			<h2><u>Registraction form</u></h2>
		<form id="f1" action="simpleReg.php" onsubmit="return validateForm()" method="post" >
		
			<table border="1">
			<!-- name -->
			<tr>
				<td><label for="name">  NAME: </label></td>
				<td><input name="name" id="name" placeholder="Enter your name"  type="text" /></td>

			</tr>
			<!-- Register number -->
			<tr>
				<td><label for="reg"> REG NO: </label></td>
				<td><input name="reg" id="reg" placeholder="Enter your register number" type="number" /></td>
			</tr>
			
			<!-- CGPA -->
			<tr>
				<td><label for="cgpa"> CGPA: </label></td>
				<td><input name="cgpa" id="cgpa" placeholder="Enter your cgpa" type="number" /></td>
			</tr>
			<tr style="text-align:center;">
				<td  colspan="2">
				<button type="submit" name="submit">submit</button><br/>
				<button type="submit" value="reset" name="reset">reset</button>
				</td>
				
			
			</tr>
		
		</table>
		</form>
		</cetner>
		<hr/>
		<?php
			
			
			if(isset($_POST['submit']))
			{
			$name=$_POST["name"];
			$reg=$_POST["reg"];
			$cgpa=$_POST["cgpa"];
			echo "
				<table border='1'> 
					<tr>
					
						<td>NAME</td>
						<td>REG</td>
						<td>CGPA</td>
					</tr>
					<tr>
						<td>{$name}</td>
						<td>{$reg}</td>
						<td>{$cgpa}</td>
					</tr>
				</table>
			";
			}
			if(isset($_POST['reset']))
			{
			header("Refresh");
			}
			
			
		?>
	</body>
	<script>
	//function for validating form
		validateForm=()=>{
		if(document.forms.f1.name.value==""){
				alert("Please enter  you name");
				document.forms.f1.name.focus();
				return false;
			}
			if(document.forms.f1.reg.value==""){
				alert("Please enter the register number");
				document.forms.f1.reg.focus();
				return false;
			}
			if(document.forms.f1.cgpa.value==""){
				alert("Please enter the cgpa");
				document.forms.f1.cgpa.focus();
				return false;
			}
			return true;
			
		}
	</script>
</html>
