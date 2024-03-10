from django.db import models
from django.utils import timezone
from musician.models import Musician
# Create your models here.

musician_default = Musician.objects.first()  # Get the default Musician object
default_musician_id = musician_default.id if musician_default else None

class Album(models.Model):
    name = models.CharField(max_length=100)
    musician = models.ForeignKey(Musician, on_delete=models.CASCADE,default=default_musician_id)
    release_date = models.DateField(default=timezone.now)
    rating = models.IntegerField(default=1, choices=[(1, '1'), (2, '2'), (3, '3'), (4, '4'), (5, '5')])

    def __str__(self):
        return self.name