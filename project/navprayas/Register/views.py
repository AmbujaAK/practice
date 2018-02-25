from django.shortcuts import render
from django.http import HttpResponse

def registration(request):
    return HttpResponse("Welcome to Registration page.")

def acknowledgement(request):
    return HttpResponse("Welcome to acknowledgement page")