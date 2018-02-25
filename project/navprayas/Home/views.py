from django.shortcuts import render, HttpResponse
from django.template import loader
# from django.http import HttpResponse

def index(request):
    #template = loader.get_template('Home/index.html')
    #return HttpResponse(template.render())
    return render(request, 'Home/index.html')

def event(request):
    return render(request, 'Home/events.html')