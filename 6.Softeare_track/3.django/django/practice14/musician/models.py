from django.db import models

# Create your models here.

class Musician(models.Model):
    first_name = models.CharField(max_length=50)  # TextInput
    last_name = models.CharField(max_length=50)  # TextInput
    email = models.EmailField()  # EmailInput
    instrument_type = models.CharField(max_length=100)  # TextInput
    phone_number = models.CharField(max_length=12)  # TextInput

    def __str__(self):
        return f"{self.first_name} {self.last_name}"