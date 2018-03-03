from django.shortcuts import render, HttpResponse
from django.template import loader
# from django.http import HttpResponse

def index(request):
    headName = 'NAVPRAYAS'
    args = {'headName' : headName}
    return render(request, 'Home/index.html',args)

def event(request):
    return render(request, 'Home/event.html')
