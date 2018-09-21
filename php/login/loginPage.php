<?php
    echo '<a href="../index.php"><h3>back</h3></a>';
?>

<?php
    include 'login.php';

    if(isset($_SESSION['login_user'])){
        header("location: profile.php");
    }
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <meta http-equiv="X-UA-Compatible" content="ie=edge">
    <title>login page</title>
</head>
<body>
    <div id="main">
        <h1>PHP Login Session</h1>
        <div id="login">
            <h2>Login Form</h2>
            <form action="" method="post">
                <span style="color:red"><?php echo $error_msg; ?></span><br>
                <label>UserName :</label>
                <input id="name" name="user" placeholder="username" type="text">
                <label>Password :</label>
                <input id="password" name="pass" placeholder="**********" type="password">
                <input name="submit" type="submit" value=" Login ">
            </form>
        </div>
    </div>
</body>
</html>