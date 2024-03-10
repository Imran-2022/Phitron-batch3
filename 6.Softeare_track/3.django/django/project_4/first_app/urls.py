from django.urls import path
from . import views
urlpatterns = [
    path('',views.index,name='home'),
    path('about/page=<int:id>',views.about,name='about')
]
