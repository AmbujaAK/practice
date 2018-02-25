from django.shortcuts import render, HttpResponse
from django.template import loader
# from django.http import HttpResponse

def index(request):
    #template = loader.get_template('Home/index.html')
    #return HttpResponse(template.render())
    return render(request, 'Register/index.html')

def ack(request):
    return render(request, 'Register/ack.html')