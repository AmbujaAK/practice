from django.shortcuts import render, HttpResponse
from django.template import loader
# from django.http import HttpResponse

def index(request):
    return render(request, 'Home/index.html')

def event(request):
    return render(request, 'Home/event.html')