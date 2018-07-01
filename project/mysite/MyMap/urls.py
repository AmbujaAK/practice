from django.urls import path

#from django.conf.urls.defaults import *

from . import views

urlpatterns = [
    path('', views.index, name='index'),
]

urlpatterns += [
    path('home/',views.home, name= 'home'),
    path('help/',views.help, name='help'),
    path('login/',views.login, name= 'login'),
    path('logout/', views.logout, name='logout'),
    #path(r^'api/0.5/(?P<url>.+)', 'api_proxy'),
    #path(r^'(?P<type>node|way|relation)/(?P<id>\d+)/', 'load'),
]
