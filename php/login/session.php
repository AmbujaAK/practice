<?php

require 'connect.php';

// selecting database.
$select_db = mysqli_select_db($conn, 'practice');

if(!$select_db)
{
    echo "<center><h1 style='color:red'>Database <strong style='color:black'>Practice</strong> Connection Failed</h1><center>";
}

# starting session
session_start();

# storing Session
$user_check = $_SESSION['login_user'];

# SQL Query To Fetch Complete Information Of User
$ssql = "SELECT * FROM students WHERE user = '$user_check'";

$result = mysqli_query($ssql);

$row = mysqli_fetch_assoc($result);

$login_session = $row['user'];

if(!isset($login_session)) 
{
    mysqli_close($conn); // Closing Connection
    header('Location: loginPage.php'); // Redirecting To Home Page
}
?>