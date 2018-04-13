function fncSubmit() {
  if(document.ChangePasswordForm.OldPassword.value == "") {
    alert('Please input old password');
    document.ChangePasswordForm.OldPassword.focus();
    return false;
  }

  if(document.ChangePasswordForm.newpassword.value == "") {
    alert('Please input Password');
    document.ChangePasswordForm.newpassword.focus();
    return false;
  }

  if(document.ChangePasswordForm.conpassword.value == "") {
    alert('Please input Confirm Password');
    document.ChangePasswordForm.conpassword.focus();
    return false;
  }

  if(document.ChangePasswordForm.newpassword.value != document.ChangePasswordForm.conpassword.value) {
    alert('Confirm Password Not Match');
    document.ChangePasswordForm.conpassword.focus();
    return false;
  }

  document.ChangePasswordForm.submit();
}
