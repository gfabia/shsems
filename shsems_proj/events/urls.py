from django.urls import path

from .views import (EventListView, EventDetailView, 
     MyEventListView, MyEventCreateView)

urlpatterns = [
     path('', 
         EventListView.as_view(), name="events_list"),
     path('new/', 
         MyEventCreateView.as_view(), name="event_create"), 
     path('my-events/', 
         MyEventListView.as_view(), name="my_events_list"), 
     path('<int:pk>/', EventDetailView.as_view(),
         name="event_detail"),
]
