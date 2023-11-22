

<?php
// Creating a connection
$cc = new mysqli("localhost", "root", "");

// Check connection
if ($cc->connect_error) {
die("Connection failed: " . $cc->connect_error);
}
// Creating a database named newDB
$s = "CREATE DATABASE S3MCA";
if ($cc->query($s) === TRUE) {
echo "Database created successfully with the name S3MCA";
} else {
echo "Error creating database: " . $cc->error;
}

// closing connection
$cc->close();

?>