# Generated by Django 2.0 on 2019-11-21 15:16

from django.conf import settings
from django.db import migrations, models
import django.db.models.deletion
import registrations.models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
        ('events', '0003_auto_20191121_1516'),
        migrations.swappable_dependency(settings.AUTH_USER_MODEL),
    ]

    operations = [
        migrations.CreateModel(
            name='Registration',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('waiver', models.FileField(upload_to=registrations.models.waiver_upload_path, verbose_name='Waiver')),
                ('parents_permit', models.FileField(upload_to=registrations.models.permit_upload_path, verbose_name="Parent's Permit")),
                ('parent_contact_number', models.CharField(max_length=20, verbose_name="Parent's Contact Number")),
                ('datetime_registered', models.DateTimeField(auto_now_add=True, verbose_name='Date Registered')),
                ('status', models.CharField(default='A', max_length=1, verbose_name='Status')),
                ('event', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='events.Event')),
                ('participant', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to=settings.AUTH_USER_MODEL)),
            ],
        ),
    ]
