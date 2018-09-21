<?php

    # starting session
    session_start();
    
    $error_msg = '';
    if(!isset($_SESSION['login_user']))
    {
        if(empty($_POST['user']) && empty($_POST['pass']))
        {
            $error_msg = "Username or password is not filled";
        }
        else
        {
            //Define username and password.
            $username = $_POST['user'];
            $password = $_POST['pass'];
            //echo '<script>console.log(' . $password . ')</script>';
            // establish connection with database.
            include 'connect.php';
            /*
            # protect MySQL injection for security purpose.
            $username = stripslashes($username);
            $password = stripslashes($password);

            $username = mysqli_real_escape_string($conn,$username);
            $password = mysqli_real_escape_string($conn,$password);
            */
            //echo '<script>console.log(' . $password . ')</script>';
            //$password = md5($password);
            
            // selecting database.
            $select_db = mysqli_select_db($conn, 'practice');
            if(!$select_db)
            {
                echo "<center><h1 style='color:red'>Database <strong style='color:black'>Practice</strong> Connection Failed</h1><center>";
            }
            else
            {   
                //echo '<script>console.log(' . $password . ')</script>';

                $sql = "SELECT * FROM students WHERE pass='$password' AND user='$username'";
                $result = mysqli_query($conn,$sql);

                $rows = mysqli_num_rows($result);

                echo '<script>console.log(' . $rows . ')</script>';

                if($rows == 1)
                {
                    $_SESSION['login_user'] = $username; // intialize session
                    headre("location: profile.php");
                }
                else
                {
                    $error_msg = "Username or Password is invalid";
                }
                mysqli_close($conn);
            }
        }
    }
?>