# Generated by Django 5.0.3 on 2024-03-08 18:18

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('first_app', '0002_studentmodel_mother_name'),
    ]

    operations = [
        migrations.RemoveField(
            model_name='studentmodel',
            name='mother_name',
        ),
        migrations.AlterField(
            model_name='studentmodel',
            name='father_name',
            field=models.TextField(default='Rahim'),
        ),
    ]