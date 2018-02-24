from django.shortcuts import render

# Here will be the code
from django.http import HttpResponse


def index(request):
        return HttpResponse("Hello, world. You're at the polls index.")
