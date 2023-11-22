<?php

// checking connection
$conn = new mysqli("localhost", "root", "","S3MCA");
// Check connection
if ($conn->connect_error) {
die("Connection failed: " . $conn->connect_error);
}

// sql code to create table
$sl = "CREATE TABLE Student(
id INT(2) PRIMARY KEY,
Name VARCHAR(30) NOT NULL
)";

if ($conn->query($sl) === TRUE) {
echo "Table Student created successfully";
} else {
echo "Error creating table: " . $conn->error;
}

$conn->close();
?>