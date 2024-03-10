from django.urls import path
from . import views
urlpatterns = [
    path('',views.practice,name="practice"),
]
